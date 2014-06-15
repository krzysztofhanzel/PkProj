#include "stdafx.h"
#include "Zarz�dcaPrzedmiot�w.h"
#include <list>
#include <cstdio>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"

using namespace std;

void Zarz�dcaPrzedmiot�w::MenuPrzedmiot�w(list<Tw�rca>* ListaTw�rc�w, list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	int intmenu;
	do {
		system ("CLS");
		cout << "WItaj w menu przedmiot�w. Wybierz kategori� przedmiot�w:";
		cout << "\n1. Ksi��ki";
		cout << "\n2. Audiobooki";
		cout << "\n3. Muzyka";
		cout << "\n4. Film";
		cout << "\n9. Wyj�cie";
		cin >> intmenu;
	
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
	} while (intmenu != 9);
}

void Zarz�dcaPrzedmiot�w::MenuBook(list<Tw�rca>* Tw�rcy, list<Book>* Booktmp)
{
	list<Tw�rca> ListaTw�rc�w;			ListaTw�rc�w = *Tw�rcy;
	list<Book> ListaBook;				ListaBook = *Booktmp;
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
			TmpBook.GenerujKsi��k�(&ListaTw�rc�w);
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
						TmpBook.GenerujKsi��k�(Tw�rcy);
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
			cin.ignore();
			getline(cin,TmpTytu�);
			for( list<Book>::iterator iter=ListaBook.begin(); iter != ListaBook.end(); iter++) {
				TmpBook = *iter;
				if (TmpBook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpBook.Przedstaw();
					cout << "Usun��? [T/N]";
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
			cout << "Podaj Tytu� Ksi��ki:";
			cin.ignore();
			getline(cin,TmpTytu�);
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
	*Tw�rcy = ListaTw�rc�w; 
	*Booktmp = ListaBook;
}
void Zarz�dcaPrzedmiot�w::MenuAudiobook(list<Tw�rca>* Tw�rcy, list<Audiobook>* Audiobooktmp)
{
	list<Tw�rca> ListaTw�rc�w;			ListaTw�rc�w = *Tw�rcy;
	list<Audiobook> ListaAudiobook;		ListaAudiobook = *Audiobooktmp;
	Audiobook TmpAudiobook; string TmpTytu�, TmpGatunek; int TmpInt; char tmpChar;
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
			TmpAudiobook.GenerujAudiobook(&ListaTw�rc�w);
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
			cout << "Podaj Tytu� Ksi��ki:";
			cin >> TmpTytu�;cin.ignore();
			getline(cin,TmpTytu�);
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
				TmpAudiobook = *iter;
				if (TmpAudiobook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpAudiobook.Przedstaw();
					cout << "Zmieni�? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpAudiobook.GenerujAudiobook(Tw�rcy);
						*iter = TmpAudiobook;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowa� ca�� list�? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaAudiobook.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu� Ksi��ki:";
			cin.ignore();
			getline(cin,TmpTytu�);
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
				TmpAudiobook = *iter;
				if (TmpAudiobook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpAudiobook.Przedstaw();
					cout << "Usun��? [T/N]";
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
			cout << "Podaj Tytu� Ksi��ki:";
			cin.ignore();
			getline(cin,TmpTytu�);
			for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
				TmpAudiobook = *iter;
				if (TmpAudiobook.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpAudiobook.Przedstaw();
					cout << "Na magazynie mamy " << TmpAudiobook.Ilo�� << " sztuk tej pozycji. Ile chcesz doda�? :";
					cin >> TmpInt;
					cout << "Chcesz doda� " << TmpInt << " ksi��ek.  po operacji b�dzie " << (TmpAudiobook.Ilo�� + TmpInt) << " ksi��ek. Czy chcesz kontynuowa�? [T/N]:\n ";
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
	*Tw�rcy = ListaTw�rc�w; *Audiobooktmp = ListaAudiobook;
}
void Zarz�dcaPrzedmiot�w::MenuMusic(list<Tw�rca>* Tw�rcy, list<Music>* Musictmp)
{
	list<Tw�rca> ListaTw�rc�w;			ListaTw�rc�w = *Tw�rcy;
	list<Music> ListaMusic;				ListaMusic = *Musictmp;

	Music TmpMusic; string TmpTytu�, TmpGatunek; int TmpInt; char tmpChar;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu P�yt: \n";
			cout << "1.Dodaj P�yt�\n";
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
			TmpMusic.GenerujMusic(&ListaTw�rc�w);
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
			cout << "Podaj Tytu� P�yty:";
			cin.ignore();
			getline(cin,TmpTytu�);
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
				TmpMusic = *iter;
				if (TmpMusic.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpMusic.Przedstaw();
					cout << "Zmieni�? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpMusic.GenerujMusic(Tw�rcy);
						*iter = TmpMusic;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowa� ca�� list�? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaMusic.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu� P�yty:";
			cin.ignore();
			getline(cin,TmpTytu�);
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
				TmpMusic = *iter;
				if (TmpMusic.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpMusic.Przedstaw();
					cout << "Usun��? [T/N]";
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
			cout << "Podaj Tytu� P�yty:";
			cin >> TmpTytu�;
			for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
				TmpMusic = *iter;
				if (TmpMusic.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpMusic.Przedstaw();
					cout << "Na magazynie mamy " << TmpMusic.Ilo�� << " sztuk tej p�yty. Ile chcesz doda�? :";
					cin >> TmpInt;
					cout << "Chcesz doda� " << TmpInt << " p�yt.  po operacji b�dzie " << (TmpMusic.Ilo�� + TmpInt) << " p�yt. Czy chcesz kontynuowa�? [T/N]:\n ";
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
	*Tw�rcy = ListaTw�rc�w; *Musictmp = ListaMusic;
}
void Zarz�dcaPrzedmiot�w::MenuVideo(list<Tw�rca>* Tw�rcy, list<Video>* Videotmp)
{
	list<Tw�rca> ListaTw�rc�w;			ListaTw�rc�w = *Tw�rcy;
	list <Video> ListaVideo;			ListaVideo = *Videotmp;

	Video TmpVideo; string TmpTytu�, TmpGatunek; int TmpInt; char tmpChar;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu film�w: \n";
			cout << "1.Dodaj film�w�\n";
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
			TmpVideo.GenerujVideo(&ListaTw�rc�w);
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
			cout << "Podaj Tytu� film�wy:";
			cin >> TmpTytu�;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
				TmpVideo = *iter;
				if (TmpVideo.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpVideo.Przedstaw();
					cout << "Zmieni�? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						TmpVideo.GenerujVideo(Tw�rcy);
						*iter = TmpVideo;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowa� ca�� list�? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaVideo.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Tytu� film�wy:";
			cin >> TmpTytu�;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
				TmpVideo = *iter;
				if (TmpVideo.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpVideo.Przedstaw();
					cout << "Usun��? [T/N]";
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
			cout << "Podaj Tytu� film�wy:";
			cin >> TmpTytu�;
			for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
				TmpVideo = *iter;
				if (TmpVideo.Tytu� == TmpTytu�) {
					cout << "Obecny rekord to:\n";
					TmpVideo.Przedstaw();
					cout << "Na magazynie mamy " << TmpVideo.Ilo�� << " sztuk tej film�w. Ile chcesz doda�? :";
					cin >> TmpInt;
					cout << "Chcesz doda� " << TmpInt << " film�w.  po operacji b�dzie " << (TmpVideo.Ilo�� + TmpInt) << " film�w. Czy chcesz kontynuowa�? [T/N]:\n ";
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
	*Tw�rcy = ListaTw�rc�w; *Videotmp = ListaVideo;
}

Book Zarz�dcaPrzedmiot�w::WydajKsi��k�(list<Book> ListaKsi��ek)
{
	Book tmpbook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Ksi��ki: ";
	cin.ignore();
	getline(cin,Tytu�);
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
	cin.ignore();
	getline(cin,Tytu�);
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
	cin.ignore();
	getline(cin,Tytu�);
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
	cin.ignore();
	getline(cin,Tytu�);
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
