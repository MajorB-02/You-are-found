#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define ll long long int
#define mod 1000000007
using namespace std;
void f2432(  vector<string>&ans )
{
    cout<<"Is your character a saint??\n" ;
    int r ; cin>>r ;
    if(r==2)
    {
        string s="SWAMI VIVEKANANDA" ; ans.push_back(s) ; return ;
    }
    if(r==1)
    {
        string s="MANGAL PANDEY" ; ans.push_back(s) ;
        s="VIR SAVARKAR" ; ans.push_back(s) ;
        s="Dr B R AMBEDKAR" ; ans.push_back(s) ;
        s="BATUKESHWAR DUTT" ; ans.push_back(s) ;
        return;
    }
    string s="SWAMI VIVEKANANDA" ; ans.push_back(s) ;
    s="VIR SAVARKAR" ; ans.push_back(s) ;
    s="MANGAL PANDEY" ; ans.push_back(s) ;
    s="Dr B R AMBEDKAR" ; ans.push_back(s) ;
    s="BATUKESHWAR DUTT" ; ans.push_back(s) ;
}
void f1216( vector<string>&ans )
{
    cout<<"Is your character the writer of national anthem of india??\n" ;
    int r ; cin>>r ;
    if( r==2 )
    {
        string s="RABINDRANATH TAGORE" ; ans.push_back(s) ; return;
    }
    if(r==1) { f2432(ans) ; return; }
    string s="RABINDRANATH TAGORE" ; ans.push_back(s) ; f2432(ans) ;
}
void f976( vector<string>&ans )
{
    cout<<"Has the character graduated from an engineering college??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="SHRADDHA KAPOOR" ; ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        string s="KRITI SANON" ; ans.push_back(s) ; return ;
    }
    string s="SHRADDHA KAPOOR" ; ans.push_back(s) ;
    s="KRITI SANON" ; ans.push_back(s) ;
}
void f732( vector<string>&ans )
{
    cout<<"Is the character current Indian captain??\n";
    int r; cin>>r ;
    if( r==1 )
    {
        string s="ROHIT SHARMA" ; ans.push_back(s) ; return ;
    }
    if( r==2 )
    {
        string s="VIRAT KOHLI" ; ans.push_back(s) ; return ;
    }
    string s="ROHIT SHARMA" ; ans.push_back(s) ;
    s="VIRAT KOHLI" ; ans.push_back(s) ;
}
void f728( vector<string>&ans )
{
    cout<<"Was the character part of ICC CRICKET WORLD CUP 2011 winning team??\n" ;
    int r; cin>>r ;
    if(r==1)
    {
        string s="SUNIL GAVASKAR" ; return ;
    }
    if( r==2 )
    {
        string s="GAUTAM GAMBHIR" ; ans.push_back(s) ;
        s="VIRENDRA SEHWAG" ; ans.push_back(s) ;
        s="SURESH RAINA" ; ans.push_back(s) ;  return ;
    }
    string s="SUNIL GAVASKAR" ;
    s="GAUTAM GAMBHIR" ; ans.push_back(s) ;
    s="VIRENDRA SEHWAG" ; ans.push_back(s) ;
    s="SURESH RAINA" ; ans.push_back(s) ;
}
void f608( vector<string>&ans )
{
    cout<<"Is STATUE OF UNITY made in your character's honour??\n" ;
    int r ; cin>>r ;
    if(r==2)
    {
        string s="SARDAR VALLABH BHAI PATEL" ; ans.push_back(s) ; return ;
    }
    if(r==1)
    {
        f1216(ans) ; return;
    }
    string s="SARDAR VALLABH BHAI PATEL" ; ans.push_back(s) ; f1216(ans) ;
}
void f488( vector<string>&ans )
{
    cout<<"Has she been in any controversy at some point of time with ranbir kapoor??\n" ;
    int r; cin>>r;
    if(r==2)
    {
        string s="KATRINA KAIF" ; ans.push_back(s) ; return ;
    }
    if(r==1) { f976(ans) ; return ; }
    f976(ans) ; string s="KATRINA KAIF" ; ans.push_back(s) ;
}
void f483( vector<string>&ans )
{
    cout<<"Is your character a badminton player??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="SANIA MIRZA" ; ans.push_back(s) ;
        s="MITHALI RAJ" ; ans.push_back(s) ;
        return ;
    }
    if( r==2 )
    {
        string s="SAINA NEHWAL" ; ans.push_back(s) ;
        s="PV SINDHU" ; ans.push_back(s) ;
        return ;
    }
    string s="SANIA MIRZA" ; ans.push_back(s) ;
    s="MITHALI RAJ" ; ans.push_back(s) ;
    s="SAINA NEHWAL" ; ans.push_back(s) ;
    s="PV SINDHU" ; ans.push_back(s) ;
}
void f482( vector<string>&ans )
{
    cout<<"Is your character a wrestling player??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="MARY KOM" ; ans.push_back(s) ;
        s="DIPA KARMAKAR" ; ans.push_back(s) ;
        return ;
    }
    if( r==2 )
    {
        string s="GITA PHOGAT" ; ans.push_back(s) ;
        s="BABITA PHOGAT" ; ans.push_back(s) ;
        return ;
    }
    string s="MARY KOM" ; ans.push_back(s) ;
    s="DIPA KARMAKAR" ; ans.push_back(s) ;
    s="GITA PHOGAT" ; ans.push_back(s) ;
    s="BABITA PHOGAT" ; ans.push_back(s) ;
}
void f367( vector<string>&ans )
{
    cout<<"Does he have a brother also who is a cricketer??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="JASPRIT BUMRAH" ; ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        string s="HARDIK PANDYA" ; ans.push_back(s) ;
        s="KRUNAL PANDYA" ; ans.push_back(s) ;
        return ;
    }
    string s="JASPRIT BUMRAH" ; ans.push_back(s) ;
    s="HARDIK PANDYA" ; ans.push_back(s) ;
    s="KRUNAL PANDYA" ; ans.push_back(s) ;
}
void f366( vector<string>&ans )
{
    cout<<"Is the character better known as GABBAR??\n" ;
    int r; cin>>r ;
    if(r==1) { f732(ans) ; return ; }
    if(r==2)
    {
        string s="SHIKHAR DHAWAN" ; ans.push_back(s) ; return ;
    }
    f732(ans) ;
    string s="SHIKHAR DHAWAN" ; ans.push_back(s) ;
}
void f364( vector<string>&ans )
{
    cout<<"Is there a movie/biopic in bollywood of this character??\n" ;
    int r; cin>>r ;
    if(r==1) { f728(ans) ; return ; }
    if(r==2)
    {
        string s="MAHENDRA SINGH DHONI" ; ans.push_back(s) ;
        s="SACHIN TENDULKAR" ; ans.push_back(s) ; return;
    }
    f728(ans) ;
    string s="MAHENDRA SINGH DHONI" ; ans.push_back(s) ;
    s="SACHIN TENDULKAR" ; ans.push_back(s) ;
}
void f304( vector<string>&ans )
{
    cout<<"Does the suffix \"azad\" come after his name??\n " ;
    int r  ; cin>>r ;
    if(r==2)
    {
        string s="MAULANA ABUL KALAM AZAD" ; ans.push_back(s) ;
        s="CHANDRA SHEKHAR AZAD" ; ans.push_back(s) ;
        return ;
    }
    if(r==1)
    {
        f608(ans) ; return;
    }
    string s="MAULANA ABUL KALAM AZAD" ; ans.push_back(s) ;
    s="CHANDRA SHEKHAR AZAD" ; ans.push_back(s) ;
    f608(ans) ;
}
void f280( vector<string>&ans )
{
    cout<<"Is your character famous for invention of electric bulb??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="GALILEO GALILEI" ; ans.push_back(s) ;
        s="FLEMING" ; ans.push_back(s) ;
        s="MICHAEL FARADAY" ; ans.push_back(s) ;
        s="ARCHIMEDES" ; ans.push_back(s) ;
        return;
    }
    if(r==2)
    {
        string s="THOMAS ALVA EDISON" ; ans.push_back(s) ; return;
    }
    string s="GALILEO GALILEI" ; ans.push_back(s) ;
    s="FLEMING" ; ans.push_back(s) ;
    s="MICHAEL FARADAY" ; ans.push_back(s) ;
    s="ARCHIMEDES" ; ans.push_back(s) ;
    s="THOMAS ELVA EDISON" ; ans.push_back(s) ;
}
void f247( vector<string>&ans )
{
    cout<<"Is the character married to an Indian??\n" ;
    int r; cin>>r ;
    if(r==1)
    {
        string s="PRIYANKA CHOPRA" ; ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        string s="AISHWARYA RAI BACHCHAN" ; ans.push_back(s) ; return ;
    }
    string s="PRIYANKA CHOPRA" ; ans.push_back(s) ;
    s="AISHWARYA RAI BACHCHAN" ; ans.push_back(s) ;
}
void f246( vector<string>&ans )
{
    cout<<"Is the character married to a cricketer??\n" ;
    int r; cin>>r;
    if(r==2)
    {
        string s="ANUSHKA SHARMA" ; ans.push_back(s) ; return ;
    }
    if(r==1)
    {
        string s="RANI MUKHERJEE" ; ans.push_back(s) ;
        s="DEEPIKA PADUKONE" ; ans.push_back(s) ;
        s="RAVEENA TANDON" ; ans.push_back(s) ;
        s="MADHURI DIXIT" ; ans.push_back(s) ;
        s="VIDYA BALAN" ; ans.push_back(s) ;
        s="KAREENA KAPOOR" ; ans.push_back(s) ;
        return;
    }
    string s="ANUSHKA SHARMA" ; ans.push_back(s) ;
    s="RANI MUKHERJEE" ; ans.push_back(s) ;
    s="DEEPIKA PADUKONE" ; ans.push_back(s) ;
    s="RAVEENA TANDON" ; ans.push_back(s) ;
    s="MADHURI DIXIT" ; ans.push_back(s) ;
    s="VIDYA BALAN" ; ans.push_back(s) ;
    s="KAREENA KAPOOR" ; ans.push_back(s) ;
}
void f244( vector<string>&ans )
{
    cout<<"Is she seen as a young girl of bollywood??\n" ;
    int r ; cin>>r ;
    if( r==1 ) { f488(ans)  ; return ;  }
    if(r==2)
    {
        string s="ALIA BHATT" ; ans.push_back(s) ;
        s="ANANYA PANDEY" ; ans.push_back(s) ; return ;
    }
    f488(ans)  ;
    string s="ALIA BHATT" ; ans.push_back(s) ;
    s="ANANYA PANDEY" ; ans.push_back(s) ;
}
void f241(vector<string>&ans  )
{
    cout<<"Does your character play with a bat or a racket??\n" ;
    int r ;cin>>r ;
    if(r==1){ f482(ans) ; return;  }
    if(r==2){ f483(ans) ; return ;  }
    f482(ans) ;  f483(ans) ;
}

void f183( vector<string>&ans )
{
    cout<<"Does he bowl??\n" ;
    int r ; cin>>r ;
    if(r==1){ f366(ans) ; return ; }
    if(r==2) { f367(ans) ; return ;  }
    f366(ans) ;  f367(ans) ;
}
void f182( vector<string>&ans )
{
    cout<<"Is the player better known by its sirname??\n" ;
    int r;cin>>r ;
    if(r==1)
    {
        string s="YUVRAAJ SINGH" ; ans.push_back(s) ;
        s="KAPIL DEV" ; ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        f364(ans) ; return ;
    }
    string s="YUVRAAJ SINGH" ; ans.push_back(s) ;
    s="KAPIL DEV" ; ans.push_back(s) ;
    f364(ans) ; return ;
}
void f179( vector<string>&ans )
{
    cout<<"Is your character the current prime minister of INDIA??\n";
    int r ; cin>>r ;
    if( r==1 )
    {
        string s="AMIT SHAH" ; ans.push_back(s) ;
        s="RAJNATH SINGH" ; ans.push_back(s) ;
        return ;
    }
    if(r==2)
    {
        string s="NARENDRA MODI" ; ans.push_back(s) ; return ;
    }
    string s="AMIT SHAH" ; ans.push_back(s) ;
    s="RAJNATH SINGH" ; ans.push_back(s) ;
    s="NARENDRA MODI" ; ans.push_back(s) ;
}
void f178( vector<string>&ans )
{
    cout<<"Is your character a part of congress party??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="ARVIND KEJARIWAL" ; ans.push_back(s) ;
        s="MANISH SISODIYA" ; ans.push_back(s) ;
        return ;
    }
    if(r==2)
    {
        string s="RAHUL GANDHI" ; ans.push_back(s) ; return ;
    }
    string s="ARVIND KEJARIWAL" ; ans.push_back(s) ;
    s="MANISH SISODIYA" ; ans.push_back(s) ;
    s="RAHUL GANDHI" ; ans.push_back(s) ; return ;
}
void f177( vector<string>&ans )
{
    cout<<"Is your character from tech company??\n" ;
    int r; cin>>r ;
    if(r==1)
    {
        string s="AMBANIS" ; ans.push_back(s) ;
        s="TATAS" ; ans.push_back(s) ;
        return ;
    }
    if( r==2 )
    {
        string s="SATYA NADELLA" ; ans.push_back(s) ;
        s="VIJAY SHEKHAR SHARMA" ; ans.push_back(s) ;
        s="SUNDAR PICHAI" ; ans.push_back(s) ;
        return ;
    }
    string s="AMBANIS" ; ans.push_back(s) ;
    s="TATAS" ; ans.push_back(s) ;
    s="SATYA NADELLA" ; ans.push_back(s) ;
    s="VIJAY SHEKHAR SHARMA" ; ans.push_back(s) ;
    s="SUNDAR PICHAI" ; ans.push_back(s) ;
}
void f176( vector<string>&ans )
{
    cout<<"Is the character a singer??\n" ;
    int r ; cin>>r ;
    if( r==1 ) {  return ; }
    if( r==2 )
    {
        string s="ATIF ASLAM" ; ans.push_back(s) ;
        s="ARIJIT SINGH" ; ans.push_back(s) ;
        s="A R RAHMAN" ; ans.push_back(s) ;
        s="SHANKAR MAHADEVAN" ; ans.push_back(s) ;
        s="SONU NIGAM" ; ans.push_back(s) ;
        return ;
    }
        string s="ATIF ASLAM" ; ans.push_back(s) ;
    s="ARIJIT SINGH" ; ans.push_back(s) ;
    s="A R RAHMAN" ; ans.push_back(s) ;
    s="SHANKAR MAHADEVAN" ; ans.push_back(s) ;
    s="SONU NIGAM" ; ans.push_back(s) ;
}
void f153( vector<string>&ans )
{
    cout<<"Did he became first president/prime-minister of India??\n";
    int r ; cin>>r ;
    if(r==2)
    {
        string s="MUHAMMAD ALI JINNAH" ; ans.push_back(s) ; return ;
    }
    if(r==1)
    {
        string s="Dr RAJENDRA PRASAD" ; ans.push_back(s) ;
        s="JAWAHARLAL NEHRU" ; ans.push_back(s) ; return ;
    }
    string s="MUHAMMAD ALI JINNAH" ; ans.push_back(s) ;
    s="Dr RAJENDRA PRASAD" ; ans.push_back(s) ;
    s="JAWAHARLAL NEHRU" ; ans.push_back(s) ;
}
void f152( vector<string>&ans )
{
    cout<<"Is the character referred as father of the nation??\n" ;
    int r ; cin>>r ;
    if( r==1 ) { f304(ans) ; return;  }
    if(r==2)
    {
        string s="MAHATMA GANDHI" ; ans.push_back(s) ; return;
    }
    f304(ans) ;
    string s="MAHATMA GANDHI" ; ans.push_back(s) ;
}
void f140( vector<string>&ans )
{
    cout<<"Is the person famous for his theory of relativity??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        f280(ans) ; return ;
    }
    if(r==2)
    {
        string s="ALBERT EINSTEIN" ; ans.push_back(s) ; return ;
    }
    f280(ans) ;
    string s="ALBERT EINSTEIN" ; ans.push_back(s) ;
}
void f128( vector<string>&ans )
{
    cout<<"Is your character a big fighter of his time??\n" ;
    int r ; cin>>r ;
    if(r==2)
    {
        string s="ALEXANDER" ; ans.push_back(s) ;
        s="ADOLF HITLER" ; ans.push_back(s) ;
        return ;
    }
    if(r==1)
    {
        string s="CHRISTOPHER COLUMBUS" ; ans.push_back(s) ;
        s="GAUTAM BUDDHA" ; ans.push_back(s) ;
        s="NELSON MANDELA" ; ans.push_back(s) ;
        s="ABRAHAM LINCOLN" ; ans.push_back(s) ;
        s="STEVE JOBS" ; ans.push_back(s) ;
        s="DENNIS RITCHIE" ; ans.push_back(s) ;
        return ;
    }
    string s="ALEXANDER" ; ans.push_back(s) ;
    s="ADOLF HITLER" ; ans.push_back(s) ;
    s="NELSON MANDELA" ; ans.push_back(s) ;
    s="DENNIS RITCHIE" ; ans.push_back(s) ;
    s="STEVE JOBS" ; ans.push_back(s) ;
    s="CHRISTOPHER COLUMBUS" ; ans.push_back(s) ;
    s="GAUTAM BUDDHA" ; ans.push_back(s) ;
    s="ABRAHAM LINCOLN" ; ans.push_back(s) ;
}
void f123( vector<string>&ans )
{
    cout<<"Has the character been MISS UNIVERSE ever??" ;
    int r ; cin>>r ;
    if(r==1) { f246(ans) ; return ; }
    if(r==2) { f247(ans) ; return ; }
    f246(ans) ; f247(ans) ;
}
void f122( vector<string>&ans )
{
    cout<<"Has the character recently played the role of RANI LAKSHMIBAI??\n" ;
    int r ; cin>> r ;
    if( r==1 ) { f244(ans) ; return ;  }
    if(r==2)
    {
        string s="KANGANA RANAUT" ; ans.push_back(s) ; return  ;
    }
    string s="KANGANA RANAUT" ; ans.push_back(s) ; f244(ans) ;
}
void f120( vector<string>&ans )
{
    cout<<"Is your character a sportsperson??\n";
    int r ;cin>>r ;
    if(r==1)
    {
        string s="NITA AMBANI" ; ans.push_back(s) ;
        return;
    }
    if(r==2) { f241(ans) ; return ; }
    f241(ans) ;
    string s="NITA AMBANI" ; ans.push_back(s) ;
}
void f112( vector<string>&ans )
{
    cout<<"Is your character a singer??\n" ;
    int r; cin>>r ;
    if(r==1)
    { string s ; 
        s="HILLARY CLINTON" ; ans.push_back(s) ;
        return ;
    }
    if(r==2)
    {
        string s="MADONNA" ; ans.push_back(s) ;
        s="TAYLOR SWIFT" ; ans.push_back(s) ;
        s="SELENA GOMEZ" ; ans.push_back(s) ;
        s="JENNIFER LOPEZ" ; ans.push_back(s) ;
        return ;
    }
    string s ;
    s="HILLARY CLINTON" ; ans.push_back(s) ;
    s="MADONNA" ; ans.push_back(s) ;
    s="SELENA GOMEZ" ; ans.push_back(s) ;
    s="JENNIFER LOPEZ" ; ans.push_back(s) ;
    s="TAYLOR SWIFT" ; ans.push_back(s) ;
}
void f91( vector<string>&ans )
{
    cout<<"Does the character still play international cricket??\n" ;
    int r; cin>>r ;
    if(r==1) { f182(ans) ; return ; }
    if(r==2) { f183(ans) ; return ;  }
    f182(ans) ; f183(ans) ;
}
void f89( vector<string>&ans )
{
    cout<<"Is your character a part of current cabinet team of ministers??\n";
    int r ; cin>>r;
    if(r==1) { f178(ans) ; return ;  }
    if( r==2 ) { f179(ans) ; return;  }
    f178(ans) ;  f179(ans) ;
}
void f88( vector<string>&ans )
{
    cout<<"Is the character at a reputed post in a big company??\n" ;
    int r ; cin>>r ;
    if(r==1) { f176(ans) ; return ; }
    if(r==2) { f177(ans) ; return ;  }
    f176(ans) ;  f177(ans) ;
}
void f82( vector<string>&ans )
{
    cout<<"Is the character a footballer??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="MAGNUS CARLSEN" ; ans.push_back(s) ;
        s="USAIN BOLT" ; ans.push_back(s) ;
        s="ROGER FEDERER" ; ans.push_back(s) ;
        s="RAFAEL NADAL" ; ans.push_back(s) ;
        return ;
    }
    if(r==2)
    {
        string s="CRISTIANO RONALDO" ; ans.push_back(s) ;
        s="LIONEL MESSI" ; ans.push_back(s) ;
        s="NEYMAR JUNIOR" ; ans.push_back(s) ;
        return ;
    }
    string s="MAGNUS CARLSEN" ; ans.push_back(s) ;
    s="USAIN BOLT" ; ans.push_back(s) ;
    s="ROGER FEDERER" ; ans.push_back(s) ;
    s="RAFAEL NADAL" ; ans.push_back(s) ;
    s="CRISTIANO RONALDO" ; ans.push_back(s) ;
    s="LIONEL MESSI" ; ans.push_back(s) ;
    s="NEYMAR JUNIOR" ; ans.push_back(s) ;
}
void f81( vector<string>&ans )
{
    cout<<"Is your character presently or at any point of time a CEO or any other position of honour in any social media application??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="JEFF BEZOS" ; ans.push_back(s) ;
         s="TIM COOK" ; ans.push_back(s) ;
        s="ELON MUSK" ; ans.push_back(s) ;
        s="BILL GATES" ; ans.push_back(s) ;
        return;
    }
    if( r==2 )
    {
        string s="MARK ZUCKERBURG" ; ans.push_back(s) ;
        s="JEFF WEINER" ; ans.push_back(s) ;
        return ;
    }
    string s="JEFF BEZOS" ; ans.push_back(s) ;
     s="TIM COOK" ; ans.push_back(s) ;
    s="ELON MUSK" ; ans.push_back(s) ;
    s="MARK ZUCKERBURG" ; ans.push_back(s) ;
    s="JEFF WEINER" ; ans.push_back(s) ;
    s="BILL GATES" ; ans.push_back(s) ;
}
void f80( vector<string>&ans )
{
    cout<<"Is your character a singer??\n" ;
    int r ;cin>>r ;
    if(r==2)
    {
        string s="JUSTIN BIEBER" ; ans.push_back(s) ;
        s="TOM WALKER" ; ans.push_back(s) ;
        s="SHAWN MENDES" ; ans.push_back(s) ;
        return ;
    }
    if(r==1)
    {
        string s="WARREN BUFFET" ; ans.push_back(s) ;
        return ;
    }
    string s="JUSTIN BIEBER" ; ans.push_back(s) ;
    s="WARREN BUFFET" ; ans.push_back(s) ;
    s="TOM WALKER" ; ans.push_back(s) ;
    s="SHAWN MENDES" ; ans.push_back(s) ;
}
void f76( vector<string>&ans )
{
    cout<<"Did the character later on became first president or prime minister??\n";
    int r ; cin>>r;
    if(r==1) { f152(ans) ; return ;  }
    if( r==2 ) { f153(ans) ; return;  }
    f152(ans) ;  f153(ans) ;
}
void f74( vector<string>&ans )
{
    cout<<"Is your character associated to MAURYAN dynasty??\n" ;
    int r;cin>>r ;
    if(r==1)
    {
        string s="SHIVAJI" ; ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        string s="CHANDRAGUPTA MAURYA" ; ans.push_back(s)  ;
        s="ASHOKA" ; ans.push_back(s)  ;
        s="CHANAKYA" ; ans.push_back(s)  ;  return ;
    }
    string s="SHIVAJI" ; ans.push_back(s) ;
    s="ASHOKA" ; ans.push_back(s)  ;
    s="CHANDRAGUPTA MAURYA" ; ans.push_back(s)  ;
    s="CHANAKYA" ; ans.push_back(s)  ;
}
void f72( vector<string>&ans )
{
    cout<<"Did your character experianced an unnatural death??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="SIR CV RAMAN" ; ans.push_back(s);
        s="HARIVANSH RAI BACHCHAN" ; ans.push_back(s);
        return;
    }
    if(r==2)
    {
        string s="SUSHANT SINGH RAJPUT" ; ans.push_back(s); return;
    }
    string s="SIR CV RAMAN" ; ans.push_back(s) ;
    s="HARIVANSH RAI BACHCHAN" ; ans.push_back(s);
    s="SUSHANT SINGH RAJPUT" ; ans.push_back(s);
}
void f70( vector<string>&ans )
{
    cout<<"Is the character famous for the 3 laws of motion??\n" ;
    int r;
    cin>>r ;
    if(r==1) { f140(ans) ; return ; }
    if(r==2)
    {
        string s="SIR ISAAC NEWTON" ; ans.push_back(s) ; return ;
    }
    f140(ans) ;
    string s="SIR ISAAC NEWTON" ; ans.push_back(s) ;
}
void f64( vector<string>&ans )
{
    cout<<"Has your character faced paralysis??\n";
    int r; cin>>r ;
    if(r==2)
    {
        string s="STEPHEN HAWKING" ; ans.push_back(s) ; return;
    }
    if(r==1)
    {
        f128(ans) ; return;
    }
    string s="STEPHEN HAWKING" ; ans.push_back(s) ;  f128(ans) ;
}
void f61( vector<string>&ans )
{
    cout<<"Is the character married??\n" ;
    int r ; cin>>r ;
    if(r==1) { f122(ans) ; return ; }
    if(r==2) { f123(ans) ; return ;  }
    f122(ans) ; f123(ans) ;
}
void f60( vector<string>&ans )
{
    cout<<"Is the character a singer??\n" ;
    int r ; cin>>r ;
    if(r==1) { f120(ans) ; return ; }
    if(r==2)
    {
        string s="NEHA KAKKAR" ; ans.push_back(s) ;
        s="SUNIDHI CHAUHAN" ; ans.push_back(s) ;
        s="SHREYA GHOSHAL" ; ans.push_back(s) ;
        s="LATA MANGESHKAR" ; ans.push_back(s) ;
        return ;
    }
    f120(ans) ;
    string s="NEHA KAKKAR" ; ans.push_back(s) ;
    s="SUNIDHI CHAUHAN" ; ans.push_back(s) ;
    s="SHREYA GHOSHAL" ; ans.push_back(s) ;
    s="LATA MANGESHKAR" ; ans.push_back(s) ;
}
void f56( vector<string>&ans )
{
    cout<<"Is your character a saint??\n" ;
    int r ; cin>>r ;
    if(r==1) { f112(ans) ; return ; }
    if(r==2) { string s="MOTHER TERESA" ; ans.push_back(s) ; return ;  }
    string s="MOTHER TERESA" ; ans.push_back(s) ;
    f112(ans) ;
}
void f54( vector<string>&ans )
{
    int r  ;
    cout<<"Is the character a well known queen of a territory??\n" ;
    string s1="SAROJINI NAIDU" ;
    string s2="RANI LAKSHMIBAI" ;
    cin>>r ;
    if(r==1) {  ans.push_back(s1) ; return ;  }
    if( r==2 ) { ans.push_back(s2) ; return ; }
    ans.push_back(s1) ; ans.push_back(s2) ;
}
void f47( vector<string>&ans )
{
    cout<<"Is th character famous for performing stunts??\n" ;
    int r ; cin>>r ;
    if( r==1 )
    {
        string s="SALMAN KHAN" ; ans.push_back(s) ;
        s="VARUN DHAWAN" ; ans.push_back(s) ;
        s="AAMIR KHAN" ; ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        string s="HRITIK ROSHAN" ; ans.push_back(s) ;
        s="TIGER SHROFF" ; ans.push_back(s) ;
        return ;
    }
    string s="SALMAN KHAN" ; ans.push_back(s) ;
    s="VARUN DHAWAN" ; ans.push_back(s) ;
    s="TIGER SHROFF" ; ans.push_back(s) ;
    s="AAMIR KHAN" ; ans.push_back(s) ;
    s="HRITIK ROSHAN" ; ans.push_back(s) ;
}
void f46( vector<string>&ans )
{
    cout<<"Is the character a youngster in the industry??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="SHAHRUKH KHAN" ; ans.push_back(s) ;
        s="AMITABH BACHCHAN" ; ans.push_back(s) ;
        return;
    }
    if(r==2)
    {
        string s="AYUSHMAAN KHURRANA" ; ans.push_back(s) ;
        s="KARTIK ARYAN" ; ans.push_back(s) ;
        s="VICKY KAUSHAL"; ans.push_back(s) ;
        return;
    }
    string s="SHAHRUKH KHAN" ; ans.push_back(s) ;
    s="AMITABH BACHCHAN" ; ans.push_back(s) ;
    s="AYUSHMAAN KHURRANA" ; ans.push_back(s) ;
    s="KARTIK ARYAN" ; ans.push_back(s) ;
    s="VICKY KAUSHAL"; ans.push_back(s) ;
}
void f45( vector<string>&ans )
{
    cout<<"Is the character a cricketer??\n" ;
    int r; cin>>r ;
    if(r==1)
    {
        string s="MILKHA SINGH" ; ans.push_back(s) ;
        s="MAJOR DHYAN CHAND"  ; ans.push_back(s) ;
        s="VISHWANATHAN ANAND"  ; ans.push_back(s) ;
        s="THE GREAT KHALI"  ; ans.push_back(s) ;
        return ;
    }
    if( r==2 )
    {
        f91(ans) ; return ;
    }
    string s="MILKHA SINGH" ; ans.push_back(s) ;
    s="VISHWANATHAN ANAND"  ; ans.push_back(s) ;
    s="THE GREAT KHALI"  ; ans.push_back(s) ;
    s="MAJOR DHYAN CHAND"  ; ans.push_back(s) ;
    f91(ans) ; return ;
}
void f44( vector<string>&ans )
{
    cout<<"Is the character a politician??\n" ;
    int r ; cin>>r ;
    if(r==1) { f88(ans) ; return ; }
    if(r==2) { f89(ans) ; return ;  }
    f88(ans) ;  f89(ans) ;
}
void f41( vector<string>&ans )
{
    cout<<"Is your character a cricketer??\n" ;
    int r ; cin>>r ;
    if(r==1) { f82(ans) ; return ; }
    if( r==2 )
    {
        string s="KIERON POLLARD" ; ans.push_back(s) ;
        s="CHRIS GAYLE" ; ans.push_back(s) ;
        s="DAVID WARNER" ; ans.push_back(s) ;
        s="A B D VILLIERS" ; ans.push_back(s) ;
        return ;
    }
    f82(ans) ;
    string s="KIERON POLLARD" ; ans.push_back(s) ;
    s="CHRIS GAYLE" ; ans.push_back(s) ;
    s="DAVID WARNER" ; ans.push_back(s) ;
    s="A B D VILLIERS" ; ans.push_back(s) ;
}
void f40( vector<string>&ans )
{
    cout<<"Does the character work at a good reputed tech company or has a significant contribution in tech field??\n" ;
    int r ; cin>>r ;
    if(r==1) { f80(ans) ; return;  }
    if(r==2) { f81(ans) ; return;  }
    f80(ans) ;  f81(ans) ;
}
void f39( vector<string>&ans )
{
    cout<<"Was the character the main leader of the 3 hanged??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s="SHIVARAM RAJGURU" ;
        ans.push_back(s);
        s="SUKHDEV THAPAR" ;
        ans.push_back(s) ;
        return ;
    }
    if( r==2 )
    {
        string s="BHAGAT SINGH" ;
        ans.push_back(s);
        return ;
    }
    string s="SHIVARAM RAJGURU" ;
    ans.push_back(s);
    s="SUKHDEV THAPAR" ;
    ans.push_back(s) ;
    s="BHAGAT SINGH" ;
    ans.push_back(s);
}
void f38( vector<string>&ans )
{
    cout<<"Was the person the founder and leader of INDIAN NATIONAL ARMY??\n";
    int r ; cin>>r ;
    string s="SUBHASH CHANDRA BOSE" ;
    if(r==1){ f76(ans) ; return ; }
    if( r==2 ) { ans.push_back(s) ; return ; }
    ans.push_back(s) ;   f76(ans) ;
}
void f37( vector<string>&ans )
{
    cout<<"Is your character a RAJPUT warrior??\n" ;
    int r; cin>>r ;
    if(r==1){ f74(ans) ; return ; }
    if(r==2)
    {
        string s="MAHARANA PRATAP" ; ans.push_back(s) ;
        s="MAHARANA UDAY SINGH" ;ans.push_back(s) ; return ;
    }
    f74(ans) ;
    string s="MAHARANA PRATAP" ; ans.push_back(s) ;
    s="MAHARANA UDAY SINGH" ;ans.push_back(s) ;
}
void f36( vector<string>&ans )
{
    cout<<"Has the character served INDIA as prime-minister or a president ??\n" ;
    int r ; cin>>r ;
    if(r==1) { f72(ans) ; return ;  }
    if( r==2 )
    {
        string s="Dr. APJ ABDUL KALAAM" ; ans.push_back(s) ;
        s="ATAL BIHARI VAJPAYEE" ; ans.push_back(s) ;
        s="LAL BAHADUR SHASTRI" ; ans.push_back(s) ;
        return ;
    }
    f72(ans) ;
    string s="Dr. APJ ABDUL KALAAM" ; ans.push_back(s) ;
    s="ATAL BIHARI VAJPAYEE" ; ans.push_back(s) ;
    s="LAL BAHADUR SHASTRI" ; ans.push_back(s) ;
}
void f35( vector<string>&ans )
{
    cout<<"Is the character famous for suggesting the model of an atom (protons,neutrons,eletrons)??\n" ;
    int r ; cin>>r ;
    if(r==1) { f70(ans) ; return ;  }
    if( r==2 )
    {
        string s="NEIL BOHR" ; ans.push_back(s);
        s="RUTHETFORD" ; ans.push_back(s) ;
        return ;
    }
    f70(ans) ;
    string s="NEIL BOHR" ; ans.push_back(s);
    s="RUTHETFORD" ; ans.push_back(s) ;
}
void f32( vector<string>&ans )
{
    cout<<"Did your character die due to drugs??\n" ;
    int r ; cin>>r ;
    if(r==2)
    {
        string s="MICHAEL JACKSON" ; ans.push_back(s) ; return ;
    }
    if(r==1)
    {
        f64(ans) ; return ;
    }
    string s="MICHAEL JACKSON" ; ans.push_back(s) ;   f64(ans) ;
}
void f30( vector<string>&ans )
{
    cout<<"Is the character an actress??\n" ;
    int r ; cin>>r ;
    if(r==1) { f60(ans) ; return ;  }
    if( r==2 ) { f61(ans) ; return ;  }
    f60(ans) ;   f61(ans) ;
}
void f29( vector<string>&ans )
{
    cout<<"Is the character born in Sri Lanka??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        string s= "ANGELINA JOLIE" ; ans.push_back(s) ;
         s="EMMA STONE" ; ans.push_back(s) ;
         s="JENNIFER LAWRENCE" ; ans.push_back(s) ; return ;
    }
    if( r==2 ) { string s="JACQUELINE FERNANDEZ" ; ans.push_back(s) ; return;  }
    string s= "ANGELINA JOLIE" ; ans.push_back(s) ;
     s="EMMA STONE" ; ans.push_back(s) ;
     s="JENNIFER LAWRENCE" ; ans.push_back(s) ;
    s="JACQUELINE FERNANDEZ" ; ans.push_back(s) ;
}
void f28( vector<string>&ans )
{
    cout<<"Is your character from tech profile??\n" ;
    int r ; cin>>r ;
    if( r==1 ) { f56(ans) ; return ; }
    if(r==2)
    { string s="MEG WHITMAN" ; ans.push_back(s) ;
        s="MELINDA GATES" ; ans.push_back(s) ;
        return;
    }
    f56(ans) ; string s="MEG WHITMAN" ; ans.push_back(s) ;
    s="MELINDA GATES" ; ans.push_back(s) ;
}
void f27( vector<string>&ans )
{
    int r ;
    cout<<"Has the character been the prime minister of India??\n" ;
    string s="INDIRA GANDHI"  ;
    cin>>r ;
    if(r==1) { f54(ans) ; return ;  }
    if( r==2 ) { ans.push_back(s) ;  return;  }
    ans.push_back(s) ;   f54(ans) ;
    
}
void f26( vector<string>&ans )
{
    cout<<"Is the character an astranaut??\n" ;
    int r ; cin>>r ;
    if( r==2 )
    {
        string s="KALPANA CHAWLA" ; ans.push_back(s) ; return ;
    }
    if(r==1)
    {
        string s="QUEEN JODHA" ; ans.push_back(s) ;
        s="SUSHMA SWARAJ" ; ans.push_back(s) ;
        return ;
    }
    string s="KALPANA CHAWLA" ; ans.push_back(s) ;
    s="QUEEN JODHA" ; ans.push_back(s) ;
    s="SUSHMA SWARAJ" ; ans.push_back(s) ;
}
void f23( vector<string>&ans )
{
    cout<<"Is your character's father also closely relatd to film industry??\n" ;
    int r; cin>>r ;
    if( r==1 ) { f46(ans) ; return ;  }
    if(r==2) { f47(ans) ; return ;  }
    f46(ans) ; f47(ans) ;
}
void f22( vector<string>&ans )
{
    int r ;
    cout<<" Is your character a sportsman??\n " ;
    cin>>r ;
    if( r==1 ) { f44(ans) ; return ; }
    if( r==2 ) { f45(ans) ; return ; }
    f44(ans) ; f45(ans) ;
}
void f21( vector<string>&ans )
{
    cout<<"Is your character currently also a prime minister/president\n"  ;
    int r; cin>>r ;
    if(r==1)
    {
        string s="BARACK OBAMA" ; ans.push_back(s) ;
        s="BILL CLINTON" ; ans.push_back(s) ;
        s= "SHINZO ABE" ;  ans.push_back(s) ; return ;
    }
    if(r==2)
    {
        string s="DONALD TRUMP" ; ans.push_back(s) ;
        s="XI JINPING" ; ans.push_back(s) ;
        s="VLADIMIR PUTIN" ; ans.push_back(s) ;
        s="IMRAN KHAN" ; ans.push_back(s) ;
        return ;
    }
    string s="BARACK OBAMA" ; ans.push_back(s) ;
    s="BILL CLINTON" ; ans.push_back(s) ;
    s="IMRAN KHAN" ; ans.push_back(s) ;
    s= "SHINZO ABE" ;  ans.push_back(s) ;
    s="VLADIMIR PUTIN" ; ans.push_back(s) ;
    s="DONALD TRUMP" ; ans.push_back(s) ;
    s="XI JINPING" ; ans.push_back(s) ;
}
void f20( vector<string>&ans )
{
    cout<<"Does the character has international recognition in any sports/game??\n" ;
    int r ; cin>>r ;
    if(r==1) { f40(ans) ; return ; }
    if(r==2) { f41(ans) ; return ;  }
    f40(ans) ;  f41(ans) ;
}
void f19(vector<string>&ans)
{
    int r ;
    cout<<"Was the character hanged due to bombarding in the assembly??\n" ;
    cin>>r ;
    if(r==1) { f38(ans) ; return ;  }
    if( r==2 ) { f39(ans) ; return ;  }
    f38(ans) ;   f39(ans) ;
}
void f18( vector<string>&ans )
{
    cout<<"Is your character a warrior or closely related to a famous warrior or a king??\n" ;
    int r ; cin>>r ;
    if(r==1) { f36(ans) ; return ;  }
    if( r==2 ) { f37(ans) ; return ; }
    f36(ans) ; f37(ans) ;
}
void f17( vector<string>&ans )
{
    cout<<"Has your character contributed something in the fields of physics??\n" ;
    int r ; cin>>r;
    if(r==1)
    {
        string s="BLAISE PASCAL" ; ans.push_back(s) ;
        s="CHARLES DARWIN"  ; ans.push_back(s) ;
        return;
    }
    if(r==2)
    {
        f35(ans) ; return;
    }
    string s="BLAISE PASCAL" ; ans.push_back(s) ;
    s="CHARLES DARWIN"  ; ans.push_back(s) ;
    f35(ans) ;
}
void f16( vector<string>&ans )
{
    cout<<"Is your character from mughal dynasty??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        f32(ans) ; return ;
    }
    if(r==2)
    {
        string s="AKBAR" ; ans.push_back(s) ;
        s="BAIRAM KHAN" ; ans.push_back(s) ;
        s="BABUR" ; ans.push_back(s) ;
        s="BAHADUR SHAH ZAFAR" ; ans.push_back(s) ;
        s="SHAH JAHAN" ; ans.push_back(s) ;
        return ;
    }
    f32(ans) ;
    string s="AKBAR" ; ans.push_back(s) ;
    s="BAIRAM KHAN" ; ans.push_back(s) ;
    s="BAHADUR SHAH ZAFAR" ; ans.push_back(s) ;
    s="BABUR" ; ans.push_back(s) ;
    s="SHAH JAHAN" ; ans.push_back(s) ;
}
void f15(vector<string>&ans)
{
    cout<<"Is the character a politician??\n" ;
    int r ; cin>>r ;
    if(r==1) { f30(ans) ; return ;  }
    if(r==2)
    {
        string s="SONIA GANDHI" ; ans.push_back(s) ;
        s="MAMTA BANERJEE" ; ans.push_back(s) ;
        s="NIRMALA SITARAMAN" ;  ans.push_back(s) ;
        return ;
    }
    f30(ans) ;
    string s="SONIA GANDHI" ; ans.push_back(s) ;
    s="MAMTA BANERJEE" ; ans.push_back(s) ;
    s="NIRMALA SITARAMAN" ;  ans.push_back(s) ;
}
void f14( vector<string>&ans )
{
    cout<<"Is the character an actress??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        f28(ans) ; return ;
    }
    if( r==2 )
    {
        f29(ans) ; return ;
    }
    f28(ans) ; f29(ans) ;
}
void f13( vector<string>&ans )
{
    int r ;
    cout<<" Is your character associated with British-Indian struggle??\n " ;
    cin>>r ;
    if( r==1 ) { f26(ans) ; return ; }
    if( r==2 ) { f27(ans) ; return ; }
    f26(ans) ; f27(ans) ;
}
void f11( vector<string>&ans )
{
    int r ;
    cout<<" Is your character an actor??\n " ;
    cin>>r ;
    if( r==1 ) { f22(ans) ; return ; }
    if( r==2 ) { f23(ans) ; return ; }
    f22(ans) ; f23(ans) ;
}
void f10( vector<string>&ans )
{
    cout<<"Has your character ever been president/prime-minister of his nation??\n" ;
    int r; cin>>r ;
    if( r==1 ) { f20(ans) ; return ;  }
    if(r==2) { f21(ans)  ; return ;  }
    f20(ans) ; f21(ans) ;
}
void f9( vector<string>&ans )
{
    int r ;
    cout<<" Is your character associated with British-Indian struggle??\n " ;
    cin>>r ;
    if( r==1 ) { f18(ans) ; return ; }
    if( r==2 ) { f19(ans) ; return ; }
    f18(ans) ; f19(ans) ;
}
void f8( vector<string>&ans )
{
    cout<<"Is your character a scientist/mathematician/inventor or from any such research oriented profession??\n" ;
    int r ; cin>>r ;
    if(r==1)
    {
        f16(ans) ; return ;
    }
    if(r==2)
    {
        f17(ans) ; return ;
    }
    f16(ans) ; f17(ans) ;
}

void f7(vector<string>&ans)
{
    int r;
    cout<<"Is your character INDIAN??\n" ;
    cin>>r ;
    if(r==1) { f14(ans) ;return ;  }
    if(r==2) { f15(ans); return ; }
    f14(ans) ; f15(ans) ;
}
void f6(vector<string>&ans)
{
    int r;
    cout<<"Is your character INDIAN??\n" ;
    cin>>r ;
    if(r==1)
    {
        string s="MARGARET THATCHER" ; ans.push_back(s) ;
        s="MARIE CURIE" ; ans.push_back(s) ;
        return ;
    }
    if(r==2) { f13(ans); return ; }
    string s="MARGARET THATCHER" ; ans.push_back(s) ;
    s="MARIE CURIE" ; ans.push_back(s) ;
    f13(ans) ;
}

void f5(vector<string>&ans)
{
    int r;
    cout<<"Is your character INDIAN??\n" ;
    cin>>r ;
    if(r==1) { f10(ans) ;return ;  }
    if(r==2) { f11(ans); return ; }
    f10(ans) ; f11(ans) ;
}
void f4(vector<string>&ans)
{
    int r;
    cout<<"Is your character INDIAN??\n" ;
    cin>>r ;
    if(r==1) { f8(ans) ;return ;  }
    if(r==2) { f9(ans); return ; }
    f8(ans) ; f9(ans) ;
}
void f3( vector<string>&ans )
{
    cout<<"Is your character alive??\n";
    int r ; cin>>r ;
    if(r==1){ f6(ans) ; return ; }
    if(r==2) { f7(ans) ; return ;  }
    f6(ans); f7(ans) ;
}
void f2( vector<string>&ans )
{
    cout<<"Is your character alive??\n";
    int r ; cin>>r ;
    if(r==1){ f4(ans) ; return ; }
    if(r==2) { f5(ans) ; return ;  }
    f4(ans); f5(ans) ;
}
void f1( vector<string>&ans )
{
    cout<<"So here we begin by the first question\n" ;
    int r ;
    cout<<"Is your character a female??\n" ;
    cin>>r ;
    
    if( r==1 ) { f2(ans) ; return ; }
    if( r==2 ) { f3(ans) ; return ;  }
    f2(ans) ; f3(ans) ;
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void start()
{
    vector<string>ans ;
    f1(ans) ;
    
    cout<<"\n\n\n" ;
    delay(2000) ;
    cout<<"(thinking)\n.\n.\n" ;
    delay(2000) ;
    cout<<"(still thinking)\n.\n.\n" ;
    delay(2000) ;
    cout<<"(compiling our results)\n\n\n" ;
    delay(2000) ;
    cout<<"(compilation done successfully)\n" ;
    cout<<"OHH YESS, WE GOT OUR ANSWER\n\n" ;
    delay(4000) ;
    if( ans.empty() )
    {
        cout<<"OOPS!! YOU THOUGHT OF A RARE CHARACTER AND HENCE BEATED THE MACHINE FROM YOUR GENERAL KNOWLEDGE\n\n" ;
    }
    cout<<"BASED ON YOUR GIVEN ANSWERS, THESE ARE THE CHARACTERS YOU PROBABLY WOULD HAVE THOUGHT OF:\n\n" ;
    
    for( int i=0; i<ans.size(); i++ )
    {
        cout<<i+1<<")  " ;
        cout<<ans[i]<<"\n" ;
    }
    cout<<"\n\n" ;
    cout<<"ENTER 1 IF YOUR CHARCTER IF FOUND, ELSE ENTER 0\n" ;
    int r ; cin>>r ;
    cout<<"\n\n" ;
    if(r==0)
    {
        cout<<"OOPS!! YOU THOUGHT OF A RARE CHARACTER AND HENCE BEATED THE MACHINE FROM YOUR GENERAL KNOWLEDGE\n\n" ;
    }
    if(r==1)
    {
        cout<<"NICE TO KNOW THAT WE GOT TO YOUR CHARACTER CORRECTLY\n\n" ;
    }
}


int main()
 {
     cout<<"                WELCOME TO THE PROGRAM:  YOU ARE FOUND   \n\n\n\n" ;
     
     cout<<"here, the program will ask you simple questions regarding the basic properties of the person and hence will try to figure out the character going in in your mind\n\n\n" ;
     cout<<"HOPE WE GUESS THE CHARACTER CORRECTLY\n\n\n\n\n\n" ;
     
     
     cout<<"So here we begin\n" ;
     cout<<"Press 1 to continue\n" ;
     int temp ;
     cin>>temp ;
     if(temp!=1) { cout<<"OHH NOOO, WE CANT CONTINUE \n" ; return 0 ; }
     
     cout<<"\n\n" ;
     cout<<"Basic Rules:\n" ;
     cout<<". You will be asked simple YES/NO questions\n" ;
     cout<<". If you dont know the answer, reply with 0\n" ;
     cout<<". If your answer is NO, reply with 1\n" ;
     cout<<". Finally, if your answer is YES, reply with 2\n" ;
     cout<<"\n. After a sequence of questions, we shall reach to the character you wished to search for and hence provide other info of that character too\n\n" ;
     
     
     start() ;
     
     
     
    return 0;
}
