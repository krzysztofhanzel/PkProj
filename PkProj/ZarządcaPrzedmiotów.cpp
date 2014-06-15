#include "stdafx.h"
#include "Zarz¹dcaPrzedmiotów.h"
#include <list>
#include <cstdio>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"

using namespace std;

void Zarz¹dcaPrzedmiotów::MenuPrzedmiotów(list<Twórca>* ListaTwórców, list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	int intmenu;
	do {
		system ("CLS");
		cout << "WItaj w menu przedmiotów. Wybierz kategoriê przedmiotów:";
		cout << "\n1. Ksi¹¿ki";
		cout << "\n2. Audiobooki";
		cout << "\n3. Muzyka";
		cout << "\n4. Film";
		cout << "\n9. Wyjœcie";
		cin >> intmenu;
	
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
	} while (intmenu != 9);
}

void Zarz¹dcaPrzedmiotów::MenuBook(list<Twórca>* Twórcy, list<Book>* Booktmp)
{
	list<Twórca> ListaTwórców;			ListaTwórców = *Twórcy;
	list<Book> ListaBook;				ListaBook = *Booktmp;
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
			TmpBook.GenerujKsi¹¿kê(&ListaTwórców);
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
						TmpBook.GenerujKsi¹¿kê(Twórcy);
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
			cin.ignore();
			getline(cin,TmpTytu³);
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaBook.erase(iter);
						tmpChar = 'q';
						break;
					}
				}
				if (tmpChar == 'q') break;
			}
			break;
		case 7:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin.ignore();
			getline(cin,TmpTytu³);
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
	*Twórcy = ListaTwórców; 
	*Booktmp = ListaBook;
}
void Zarz¹dcaPrzedmiotów::MenuAudiobook(list<Twórca>* Twórcy, list<Audiobook>* Audiobooktmp)
{
	list<Twórca> ListaTwórców;			ListaTwórców = *Twórcy;
	list<Audiobook> ListaAudiobook;		ListaAudiobook = *Audiobooktmp;
	Audiobook TmpAudiobook; string TmpTytu³, TmpGatunek; int TmpInt; char tmpChar;
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
			TmpAudiobook.GenerujAudiobook(&ListaTwórców);
			ListaAudiobook.push_back(TmpAudiobook);
			break;
		case 2:
			system ("CLS");
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++)
			{
				TmpAudiobook = *iter;
				TmpAudiobook.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			cout << "\n Wpisz poszukiwany gatunek: \n";
			cin >> TmpGatunek;
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++)
			{
				TmpAudiobook = *iter;
				TmpAudiobook.Przedstaw(TmpGatunek);
			}
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin >> TmpTytu³;cin.ignore();
			getline(cin,TmpTytu³);
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
				TmpAudiobook = *iter;
				if (TmpAudiobook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpAudiobook.Przedstaw();
					cout << "Zmieniæ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpAudiobook.GenerujAudiobook(Twórcy);
						*iter = TmpAudiobook;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowaæ ca³¹ listê? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaAudiobook.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin.ignore();
			getline(cin,TmpTytu³);
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
				TmpAudiobook = *iter;
				if (TmpAudiobook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpAudiobook.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaAudiobook.erase(iter);
						tmpChar = 'q';
						break;
					}
				}
				if (tmpChar == 'q') break;
			}
			break;
		case 7:
			system ("CLS");
			cout << "Podaj Tytu³ Ksi¹¿ki:";
			cin.ignore();
			getline(cin,TmpTytu³);
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
				TmpAudiobook = *iter;
				if (TmpAudiobook.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpAudiobook.Przedstaw();
					cout << "Na magazynie mamy " << TmpAudiobook.Iloœæ << " sztuk tej pozycji. Ile chcesz dodaæ? :";
					cin >> TmpInt;
					cout << "Chcesz dodaæ " << TmpInt << " ksi¹¿ek.  po operacji bêdzie " << (TmpAudiobook.Iloœæ + TmpInt) << " ksi¹¿ek. Czy chcesz kontynuowaæ? [T/N]:\n ";
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
	*Twórcy = ListaTwórców; *Audiobooktmp = ListaAudiobook;
}
void Zarz¹dcaPrzedmiotów::MenuMusic(list<Twórca>* Twórcy, list<Music>* Musictmp)
{
	list<Twórca> ListaTwórców;			ListaTwórców = *Twórcy;
	list<Music> ListaMusic;				ListaMusic = *Musictmp;

	Music TmpMusic; string TmpTytu³, TmpGatunek; int TmpInt; char tmpChar;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu P³yt: \n";
			cout << "1.Dodaj P³ytê\n";
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
			TmpMusic.GenerujMusic(&ListaTwórców);
			ListaMusic.push_back(TmpMusic);
			break;
		case 2:
			system ("CLS");
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++)
			{
				TmpMusic = *iter;
				TmpMusic.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			cout << "\n Wpisz poszukiwany gatunek: \n";
			cin >> TmpGatunek;
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++)
			{
				TmpMusic = *iter;
				TmpMusic.Przedstaw(TmpGatunek);
			}
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj Tytu³ P³yty:";
			cin.ignore();
			getline(cin,TmpTytu³);
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
				TmpMusic = *iter;
				if (TmpMusic.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpMusic.Przedstaw();
					cout << "Zmieniæ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpMusic.GenerujMusic(Twórcy);
						*iter = TmpMusic;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowaæ ca³¹ listê? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaMusic.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu³ P³yty:";
			cin.ignore();
			getline(cin,TmpTytu³);
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
				TmpMusic = *iter;
				if (TmpMusic.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpMusic.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaMusic.erase(iter);
						tmpChar = 'q';
						break;
					}
				}
				if (tmpChar == 'q') break;
			}
			break;
		case 7:
			system ("CLS");
			cout << "Podaj Tytu³ P³yty:";
			cin >> TmpTytu³;
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
				TmpMusic = *iter;
				if (TmpMusic.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpMusic.Przedstaw();
					cout << "Na magazynie mamy " << TmpMusic.Iloœæ << " sztuk tej p³yty. Ile chcesz dodaæ? :";
					cin >> TmpInt;
					cout << "Chcesz dodaæ " << TmpInt << " p³yt.  po operacji bêdzie " << (TmpMusic.Iloœæ + TmpInt) << " p³yt. Czy chcesz kontynuowaæ? [T/N]:\n ";
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
	*Twórcy = ListaTwórców; *Musictmp = ListaMusic;
}
void Zarz¹dcaPrzedmiotów::MenuVideo(list<Twórca>* Twórcy, list<Video>* Videotmp)
{
	list<Twórca> ListaTwórców;			ListaTwórców = *Twórcy;
	list <Video> ListaVideo;			ListaVideo = *Videotmp;

	Video TmpVideo; string TmpTytu³, TmpGatunek; int TmpInt; char tmpChar;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu filmów: \n";
			cout << "1.Dodaj filmówê\n";
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
			TmpVideo.GenerujVideo(&ListaTwórców);
			ListaVideo.push_back(TmpVideo);
			break;
		case 2:
			system ("CLS");
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++)
			{
				TmpVideo = *iter;
				TmpVideo.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			cout << "\n Wpisz poszukiwany gatunek: \n";
			cin >> TmpGatunek;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++)
			{
				TmpVideo = *iter;
				TmpVideo.Przedstaw(TmpGatunek);
			}
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj Tytu³ filmówy:";
			cin >> TmpTytu³;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
				TmpVideo = *iter;
				if (TmpVideo.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpVideo.Przedstaw();
					cout << "Zmieniæ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpVideo.GenerujVideo(Twórcy);
						*iter = TmpVideo;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowaæ ca³¹ listê? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaVideo.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu³ filmówy:";
			cin >> TmpTytu³;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
				TmpVideo = *iter;
				if (TmpVideo.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpVideo.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaVideo.erase(iter);
						tmpChar = 'q';
						break;
					}
				}
				if (tmpChar == 'q') break;
			}
			break;
		case 7:
			system ("CLS");
			cout << "Podaj Tytu³ filmówy:";
			cin >> TmpTytu³;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
				TmpVideo = *iter;
				if (TmpVideo.Tytu³ == TmpTytu³) {
					cout << "Obecny rekord to:\n";
					TmpVideo.Przedstaw();
					cout << "Na magazynie mamy " << TmpVideo.Iloœæ << " sztuk tej filmów. Ile chcesz dodaæ? :";
					cin >> TmpInt;
					cout << "Chcesz dodaæ " << TmpInt << " filmów.  po operacji bêdzie " << (TmpVideo.Iloœæ + TmpInt) << " filmów. Czy chcesz kontynuowaæ? [T/N]:\n ";
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
	*Twórcy = ListaTwórców; *Videotmp = ListaVideo;
}

Book Zarz¹dcaPrzedmiotów::WydajKsi¹¿kê(list<Book> ListaKsi¹¿ek)
{
	Book tmpbook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Ksi¹¿ki: ";
	cin.ignore();
	getline(cin,Tytu³);
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
	cin.ignore();
	getline(cin,Tytu³);
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
	cin.ignore();
	getline(cin,Tytu³);
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
	cin.ignore();
	getline(cin,Tytu³);
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
