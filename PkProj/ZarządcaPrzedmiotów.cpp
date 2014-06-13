#include "stdafx.h"
#include "Zarz¹dcaPrzedmiotów.h"
#include <list>
#include <cstdio>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"

using namespace std;

list<Book> ListaBook;
list<Audiobook> ListaAudiobook;
list<Music> ListaMusic;
list <Video> ListaVideo;

void Zarz¹dcaPrzedmiotów::MenuPrzedmiotów(list<Twórca> ListaTwórców, list<Book> ListaBook, list<Audiobook> ListaAudiobook, list<Music> ListaMusic, list <Video> ListaVideo)
{
	int intmenu;
	system ("CLS");
	cout << "WItaj w menu przedmiotów. Wybierz kategoriê przedmiotów:";
	cout << "\n1. Ksi¹¿ki";
	cout << "\n2. Audiobooki";
	cout << "\n3. Muzyka";
	cout << "\n4. Film";
	cout << "\n9. Wyjœcie";
	cin >> intmenu;
	do {
		switch (intmenu)
		{
		case 1:
			Zarz¹dcaPrzedmiotów::MenuBook(ListaTwórców, ListaBook);
			break;
		case 2:
			Zarz¹dcaPrzedmiotów::MenuAudiobook(ListaTwórców, ListaAudiobook);
			break;
		case 3:
			Zarz¹dcaPrzedmiotów::MenuMusic(ListaTwórców, ListaMusic);
			break;
		case 4:
			Zarz¹dcaPrzedmiotów::MenuVideo(ListaTwórców, ListaVideo);
			break;
		default:
			break;
		};
	} while (intmenu != 5);
}

void Zarz¹dcaPrzedmiotów::MenuBook(list<Twórca> ListaTwórców, list<Book> ListaBook)
{
	Book TmpBook; string TmpTytu³, TmpGatunek; int TmpInt; char tmpChar;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu Ksi¹¿ek: \n";
			cout << "1.Dodaj Ksi¹¿kê\n";
			cout << "2.Przegl¹daj listê wszystkich\n";
			cout << "3.Przegl¹daj listê Gatunkowo\n";
			cout << "4.Zast¹p poszczególne wyst¹pienia\n";
			cout << "5.Kasuj ca³¹ listê\n";
			cout << "6.Kasuj wybrany element listy\n";
			cout << "7.Zaktualizuj stan magazynowy\n";
			cout << "9.Wyjœcie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			TmpBook.GenerujKsi¹¿kê(ListaTwórców);
			ListaBook.push_back(TmpBook);
			break;
		case 2:
			system ("CLS");
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++)
			{
				TmpBook = *iter;
				TmpBook.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			cout << "\n Wpisz poszukiwany gatunek: \n";
			cin >> TmpGatunek;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++)
			{
				TmpBook = *iter;
				TmpBook.Przedstaw(TmpGatunek);
			}
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin >> TmpTytu³;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Zmieniæ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpBook.GenerujKsi¹¿kê(ListaTwórców);
						*iter = TmpBook;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowaæ ca³¹ listê? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaBook.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin >> TmpTytu³;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaBook.erase(iter);
					}
				}
			}
		case 7:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin >> TmpTytu³;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Na magazynie mamy " << TmpBook.Iloœæ << " sztuk tej pozycji. Ile chcesz dodaæ? :";
					cin >> TmpInt;
					cout << "Chcesz dodaæ " << TmpInt << " ksi¹¿ek.  po operacji bêdzie " << (TmpBook.Iloœæ + TmpInt) << " ksi¹¿ek. Czy chcesz kontynuowaæ? [T/N]:\n ";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't')
						iter->Iloœæ += TmpInt;
				}
			}
			break;
		default:
			break;
		}
	} while (switch_on != 9);
}
void Zarz¹dcaPrzedmiotów::MenuAudiobook(list<Twórca> ListaTwórców, list<Audiobook> ListaAudiobook)
{
}
void Zarz¹dcaPrzedmiotów::MenuMusic(list<Twórca> ListaTwórców, list<Music> ListaMusic)
{
}
void Zarz¹dcaPrzedmiotów::MenuVideo(list<Twórca> ListaTwórców, list<Video> ListaVideo)
{
}

Book Zarz¹dcaPrzedmiotów::WydajKsi¹¿kê(list<Book> ListaKsi¹¿ek)
{
	Book tmpbook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Ksi¹¿ki: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsi¹¿ek.begin(); iter != ListaKsi¹¿ek.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok) 
					tmpbook = *iter;
	}
	return tmpbook;
}

Audiobook Zarz¹dcaPrzedmiotów::WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Audiobooka: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpaudiobook = *iter;
	}
	return tmpaudiobook;
}

Music Zarz¹dcaPrzedmiotów::WydajMuzykê(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Albumu: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpmusic = *iter;
	}
	return tmpmusic;
}

Video Zarz¹dcaPrzedmiotów::WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Filmu: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpvideo = *iter;
	}
	return tmpvideo;
}

Zarz¹dcaPrzedmiotów::Zarz¹dcaPrzedmiotów(void)
{
}

Zarz¹dcaPrzedmiotów::~Zarz¹dcaPrzedmiotów(void)
{
}
