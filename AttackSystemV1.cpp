#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

void attackSystem(){
bool ifMissed;
char wybor;
char attack, miss;
int atk,hp,def, enAtk, enHp, enDef,time;                        // nadanie wartosci zmiennym
atk = 10;
hp  = 100;
def = 5;
enAtk = 12;
enHp = 120;
enDef = 5;
time = 0;
cout<<"HEY WATCH OUT, ENEMY IS JUMPING AT YOU!"<<endl;                 //krotki samouczek
cout<<"Try to attack enemy with trying to press -> a button!"<<endl;
cin>>attack;
if(attack!='a')                   //attack
{
    cout<<"You've picked wrong button!"<<endl;
    hp=hp-enAtk+def;
    cout<<"Your hp status is: "<<hp<<endl;
}else{
    cout<<"You hit the enemy!"<<endl;
    cout<<"Your hp status is: "<<hp<<endl;
    enHp=enHp - atk + enDef;
    cout<<"Enemy health status is: "<<enHp<<endl;
    Sleep(3000);
}
    cout<<"Ok, if you're now alright after this attack, try to miss the enemy attack, by clicking -> s button!"<<endl;
    Sleep(3000);
    cout<<"ATTACK INCOMING IN 3 SEC:"<<endl;
    Sleep(1000);
    cin>>miss;
    for(int x=0;x>=3;x++){
        Sleep(1000);
        cout<<x<<"..."<<endl;                                     //miss
        time++;
    }
    time=0;
    if(time<=3 && miss=='s' ){
        cout<<"Congrats, you've missed the attack, now try again!"<<endl;
        cout<<"Your hp status is: "<<hp<<endl;
        cout<<"Enemy health status is: "<<enHp<<endl;
    }else{
      cout<<"You failed! Try again!"<<endl;
      hp=hp-enAtk+def;
      cout<<"Your hp status is: "<<hp<<endl;
      cout<<"Enemy health status is: "<<enHp<<endl;
    }
    cout<<"Now, let's give it a bit more speed! :) "<<endl;
    while(hp>0||enHp<0){                                               //petla ktora, czeka do momentu zbicia hp do 0 (mojego/bossa)
    cout<<"a - Attack"<<endl;
    cout<<"s - Try to miss"<<endl;
    cin>>wybor;
    switch(wybor){                                        //powtarzajacy sie switch, w petli
    case 'a':
        cout<<"You hit the enemy!"<<endl;
    cout<<"Your hp status is: "<<hp<<endl;
    enHp=enHp - atk + enDef;
    cout<<"Enemy health status is: "<<enHp<<endl;
    cout<<"ATTACK INCOMING!!"<<endl;
    break;
    case 's':
        for(int x=0;x>=3;x++){
        Sleep(1000);
        cout<<x<<"..."<<endl;
        time++;
        }time=0;
        if(time<=3 && miss=='s' ){
        cout<<"Congrats, you've missed the attack, now try again!"<<endl;
        cout<<"Your hp status is: "<<hp<<endl;                                              //to samo co w samouczku
        cout<<"Enemy health status is: "<<enHp<<endl;
    }else{
      cout<<"You failed! Try again!"<<endl;
      hp=hp-enAtk+def;
      cout<<"Your hp status is: "<<hp<<endl;
      cout<<"Enemy health status is: "<<enHp<<endl;
    }
        break;
    default:
        cout<<"You've got hit!"<<endl;
    cout<<"Your hp status is: "<<hp<<endl;
    hp=hp - enAtk + def;
    cout<<"Enemy health status is: "<<enHp<<endl;
     break;
    }
   if(enHp<=0){
    cout<<"Congratulations! You've beaten the boss!"<<endl;
    getchar();
    exit(0);
   } if (hp<=0){                                                          //koniec gry
    cout<<"OH, you lost, what a pity! :c "<<endl;
     getchar();
    exit(0);
   }
}
}

int main()
{
    attackSystem();
    return 0;
}
