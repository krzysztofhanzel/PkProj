#include "stdafx.h"
#include "Zarz�dcaPrzedmiot�w.h"
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

void Zarz�dcaPrzedmiot�w::MenuPrzedmiot�w(list<Tw�rca> ListaTw�rc�w, list<Book> ListaBook, list<Audiobook> ListaAudiobook, list<Music> ListaMusic, list <Video> ListaVideo)
{
	int intmenu;
	system ("CLS");
	cout << "WItaj w menu przedmiot�w. Wybierz kategori� przedmiot�w:";
	cout << "\n1. Ksi��ki";
	cout << "\n2. Audiobooki";
	cout << "\n3. Muzyka";
	cout << "\n4. Film";
	cout << "\n9. Wyj�cie";
	cin >> intmenu;
	do {
		switch (intmenu)
		{
		case 1:
			Zarz�dcaPrzedmiot�w::MenuBook(ListaTw�rc�w, ListaBook);
			break;
		case 2:
			Zarz�dcaPrzedmiot�w::MenuAudiobook(ListaTw�rc�w, ListaAudiobook);
			break;
		case 3:
			Zarz�dcaPrzedmiot�w::MenuMusic(ListaTw�rc�w, ListaMusic);
			break;
		case 4:
			Zarz�dcaPrzedmiot�w::MenuVideo(ListaTw�rc�w, ListaVideo);
			break;
		default:
			break;
		};
	} while (intmenu != 5);
}

void Zarz�dcaPrzedmiot�w::MenuBook(list<Tw�rca> ListaTw�rc�w, list<Book> ListaBook)
{
	Book TmpBook; string TmpTytu�, TmpGatunek; int TmpInt; char tmpChar;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu Ksi��ek: \n";
			cout << "1.Dodaj Ksi��k�\n";
			cout << "2.Przegl�daj list� wszystkich\n";
			cout << "3.Przegl�daj list� Gatunkowo\n";
			cout << "4.Zast�p poszczeg�lne wyst�pienia\n";
			cout << "5.Kasuj ca�� list�\n";
			cout << "6.Kasuj wybrany element listy\n";
			cout << "7.Zaktualizuj stan magazynowy\n";
			cout << "9.Wyj�cie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			TmpBook.GenerujKsi��k�(ListaTw�rc�w);
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
			cout << "Podaj Tytu� Ksi��ki:";
			cin >> TmpTytu�;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Zmieni�? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpBook.GenerujKsi��k�(ListaTw�rc�w);
						*iter = TmpBook;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowa� ca�� list�? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaBook.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu� Ksi��ki:";
			cin >> TmpTytu�;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Usun��? [T/N]";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaBook.erase(iter);
					}
				}
			}
		case 7:
			system ("CLS");
			cout << "Podaj Tytu� Ksi��ki:";
			cin >> TmpTytu�;
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Na magazynie mamy " << TmpBook.Ilo�� << " sztuk tej pozycji. Ile chcesz doda�? :";
					cin >> TmpInt;
					cout << "Chcesz doda� " << TmpInt << " ksi��ek.  po operacji b�dzie " << (TmpBook.Ilo�� + TmpInt) << " ksi��ek. Czy chcesz kontynuowa�? [T/N]:\n ";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't')
						iter->Ilo�� += TmpInt;
				}
			}
			break;
		default:
			break;
		}
	} while (switch_on != 9);
}
void Zarz�dcaPrzedmiot�w::MenuAudiobook(list<Tw�rca> ListaTw�rc�w, list<Audiobook> ListaAudiobook)
{
}
void Zarz�dcaPrzedmiot�w::MenuMusic(list<Tw�rca> ListaTw�rc�w, list<Music> ListaMusic)
{
}
void Zarz�dcaPrzedmiot�w::MenuVideo(list<Tw�rca> ListaTw�rc�w, list<Video> ListaVideo)
{
}

Book Zarz�dcaPrzedmiot�w::WydajKsi��k�(list<Book> ListaKsi��ek)
{
	Book tmpbook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Ksi��ki: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsi��ek.begin(); iter != ListaKsi��ek.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok) 
					tmpbook = *iter;
	}
	return tmpbook;
}

Audiobook Zarz�dcaPrzedmiot�w::WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Audiobooka: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok)
		tmpaudiobook = *iter;
	}
	return tmpaudiobook;
}

Music Zarz�dcaPrzedmiot�w::WydajMuzyk�(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Albumu: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok)
		tmpmusic = *iter;
	}
	return tmpmusic;
}

Video Zarz�dcaPrzedmiot�w::WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Filmu: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok)
		tmpvideo = *iter;
	}
	return tmpvideo;
}

Zarz�dcaPrzedmiot�w::Zarz�dcaPrzedmiot�w(void)
{
}

Zarz�dcaPrzedmiot�w::~Zarz�dcaPrzedmiot�w(void)
{
}
