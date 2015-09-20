#include <iostream>
using namespace std;
#include <string>


//item0==herb,item1==flask,item2==steelswrd
int item[3];
item[0]=3;
item[1]=1;
item[2]=0;

int key1=0;
int key2=0; 

int chest1=0;
int chest2=0;
int chest3=0;
int chest4=0;
int chest5=0;
int chest6=0;

int longi,h,lati;
int i=0;
int gil=0;

//attack==0,defense==1,matk==2,mdef==3
int battle[4];
int wepatk=0;
int armordef=0;
int pegmount=0;
int swim=0;

int level=1;
int pmaxhealth=10;
int phealth=10;
int strength=4;
int battle[1]=armordef+2;
int battle[0]=wepatk+strength;
int exp=0;
int expneeded=40;

string wepname="nothing";
string hatname= "nothing";
string sheildname= "nothing";
string armorname= "nothing";
string ring1= "nothing";
string ring2="nothing";

string type="Wanderer";
string name;
string gender;

string action;

int main(){

  cout<<"\n\n\nHello, Welcome to my game!\n\n\n";
  while(1){
    cout<<"What is your name?\n";
    std::getline(std::cin,name);
    cout<<"Your name is "<<name<<", correct? y/n\n";
    std::getline(std::cin,action);
    if (action=="y")
      {cout<<"What is your gender? m/f\n";
	    std::getline(std::cin,gender);
	    if ((gender=="M")||(gender=="m"))
	      {gender="male";
		break;}
	    if((gender=="F")||(gender=="f"))
	      {gender="female";
		break;}
      }
  }
  
  cout<<"\n\nYou awaken in a small cavern.\n";
  cout<<"You can move by typing in w/W for west, n/N for north, e/E for east\nor s/S for south.\n";
  cout<<"You can bring up the help section by pressing 'h'\nYou can exit the game by pressing '0'\n";
  lati=longi=5;
  h=1;
  cout<<"You are in the center of the cavern.\n";
  cout<<"To the south is a small lake and to the west is a cliff.\n";
  cout<<"There is a door to the east.\n";
  
  for(action!="0"){
    
    cout<<"What will you do?\n";
    std::getline(std::cin,action);

    if (exp>=expneeded)
      {cout<<"You go up a level!\n";
	expneeded= expneeded*2;
	strength=strength+3;
	level=level+1;
	pmaxhealth=pmaxhealth+5;}
   
    if ((action=="w")||(action=="W"))
      {longi=longi-5;
	i++;
      	if(((longi==10)&&(lati==-5))||((longi==20)&&(lati==-10))||((longi==10)&&(lati==15))||((longi==20)&&(lati==-10))||((longi==0)&&(lati==15)))
	  {cout<<"There is a wall here. You cannot go further.\n";
	    cout<<"You go back to where you were.\n";
	    longi=longi+5;}}

    if ((action=="e")||(action=="E"))
      {longi=longi+5;
	i++;
	if(((longi==20)&&(lati==-10))||((longi==20)&&(lati==5))||((longi==20)&&(lati==15))||((longi==20)&&(lati==-5)))
	  {cout<<"There is a wall here. You cannot go further.\n";
	    cout<<"You go back to where you were.\n";
	    longi=longi-5;}}

    if ((action=="n")||(action=="N"))
      {lati=lati+5;
	i++;
	if(((longi==20)&&(lati==-10))||((longi==20)&&(lati==5)))
	  {cout<<"There is a wall here. You cannot go further.\n";
	    cout<<"You go back to where you were.\n";
	    lati=lati-5;}}

    if ((action=="s")||(action=="S"))
      {lati=lati-5;
	i++;
	if(((longi==0)&&(lati==15))||((longi==20)&&(lati==-5))||((longi==10)&&(lati==15))||((longi==20)&&(lati==15)))
	  {cout<<"There is a wall here. You cannot go further.\n";
	    cout<<"You go back to where you were.\n";
	    lati=lati+5;}
	if(((longi==10)&&(lati==-5))&&(swim=1))
	  {cout<<"\n\nTraveling to Ocean...\n\n";
	    longi=0;
	    lati= -30;}}

    if (phealth>pmaxhealth)
      {phealth=pmaxhealth;}

    if ((action=="I")||(action=="i"))
      {cout<<"\n\nThis is your inventory!\n";
	cout<<gil<<" gold\n";
	if(item[0]>0)
	  {cout<<item[0]<<" herb/s ";}
	if(item[1]>0)
	  {cout<<item[1]<<" flask/s ";}
	if(item[2]>0)
	  {cout<<item[2]<<" steel sword/s ";}
	//leave this space to add more items, after 5 items make a new line}
	cout<<"\n\n";
	if (h<=2)
	  {cout<<"You can use healing items by typing the item name.\n";
	    h=3;}
	std::getline(std::cin,action);
	if (((action=="herb")||(action=="herbs")||(action=="use herb")||(action=="use herbs"))&&(item[0]>0))
	  {int sums=(pmaxhealth-phealth)-5;
	    int heal;
	    if(sums>=0){heal=5;}
	    if(sums<0){heal=5-sums;}
	    cout<<"You use an herb. You regain "<<heal<<" hit points.\n";
	    item[0]=item[0]-1;
	    phealth=phealth+5;
	    if(phealth>pmaxhealth)
	      {phealth=pmaxhealth;}}
	if(((action=="flasks")||(action=="flask")||(action=="use flasks")||(action=="use flask"))&&(item[1]>=0))
	  {int sums=(pmaxhealth-phealth)-10;
	    int heal;
	    if(sums>=0){heal=10;}
	    if(sums<0){heal=10-sums;}
	    cout<<"You use a flask. You regain "<<heal<<" hit points.\n";
	    phealth=phealth+10;
	    phealth<=pmaxhealth;}}

    if((action=="H")||(action=="h"))
      {cout<<"You can move by typing in w/W for west, n/N for north, e/E for east\n";
	cout<<"or s/S for south.\nYou can exit the game by pressing '0'\n";
	if(h>=2)
	  {cout<<"\n\nYou can bring up your status by pressing 'p' \n";
	    cout<<"and your inventory by pressing 'i'.\n";
	    cout<<"You can use healing items by typing the item name.\n";}
      }

    if ((action=="P")||(action=="p"))
      {cout<<"\n\nYou are "<<name<<" the "<<gender<<" "<<level<<" LV "<<type<<"!\n";
	cout<<"HP "<<phealth<<"/"<<pmaxhealth<<"  "<<exp<<" out of ";
	cout<<expneeded<<" Exp gained \n";
	cout<<"   STR "<<strength<<"   DEF "<<battle[1]<<"   ATK ";
	cout<<battle[0]<<"\n";
	cout<<"You are wearing:\n"<<wepname<<" on right hand   ";
	cout<<sheildname<<" on left hand \n";
	cout<<armorname<<" on body   "<<hatname<<" on head \n";
	cout<<ring1<<" on accessary slot 1   "<<ring2;
	cout<<" on accessary slot 2\n\n";
      }
    if (((longi==0)&&(lati==5))||((longi==0)&&(lati==0))||((longi==0)&&(lati==10))){
      cout<<"You see a long cliff. There are lights at the bottom of the cliff.\n";
      if(pegmount==0)
	{cout<<"You cannot go down the cliff, you return to the center.\n";
	  longi=longi+5;}
    }
  
    if ((longi==5)&&(lati==5))
      {cout<<"You are in the center of the cavern.\n";
	cout<<"To the south is a small lake and to the west is a cliff.\n";
	cout<<"There is a door to the east.\n";}
      
    //all northwards walls
    if (((longi==0)&&(lati==10))||((longi==5)&&(lati==10))||((longi==10)&&(lati==10))||((longi==10)&&(lati==25))||((longi==15)&&(lati==25))||((longi==20)&&(lati==25))||((longi==25)&&(lati==25))||((longi==30)&&(lati==25))||((longi==25)&&(lati==-5))||((longi==30)&&(lati==-5)))
      {cout<<"There is a wall here. You cannot go further.\n";
	cout<<"You go back to where you were.\n";
	lati=lati-5;}

    //all southwards walls
    if (((longi==15)&&(lati==-20))||((longi==20)&&(lati==-20))||((longi==25)&&(lati==-20))||((longi==30)&&(lati==-25))||((longi==30)&&(lati==0))||((longi==5)&&(lati==15))||((longi==-5)&&(lati==15)))
      {cout<<"There is a wall here. You cannot go further.\n";
	cout<<"You go back to where you were.\n";
	lati=lati+5;}

    //all westward walls
    if(((longi==10)&&(lati==-10))||((longi==10)&&(lati==-15))||((longi==25)&&(lati==15))||((longi==25)&&(lati==10))||((longi==25)&&(lati==5)))
      {cout<<"There is a wall here. You cannot go further.\n";
	cout<<"You go back to where you were.\n";
	longi=longi+5;}

    //all eastwards walls
    if(((longi==25)&&(lati==0))||((longi==35)&&(lati==-10))||((longi==35)&&(lati==-15))||((longi==35)&&(lati==-20))||((longi==35)&&(lati==20))||((longi==35)&&(lati==15))||((longi==35)&&(lati==10))||((longi==35)&&(lati==5))||((longi==20)&&(lati==10)))
       {cout<<"There is a wall here. You cannot go further.\n";
	    cout<<"You go back to where you were.\n";
	    longi=longi-5;}

    if ((((action=="swim")||(action=="dive"))&&((longi==5)||(longi==0)||(longi==10))&&(lati==0))||((longi==0)&&(lati==-5))||((longi==5)&&(lati==-5)))
      {cout<<"\n\nTraveling to Ocean...\n\n";
        longi=0;
	lati= -30;}

    if(((longi==0)&&(lati==0))||((longi==5)&&(lati==0))||((longi==10)&&(lati==0)))
      {cout<<"There is a lake. It is deep and looks like it goes under the wall.\n";
	if(swim==1)
	  {cout<<"You can swim here.\n";}
	if(swim==0)
	  {cout<<"You do not have the proper gear to dive here.\n";
	    cout<<"You go back to where you were.\n";
	    cout<<"\n\n*HINT*  When you are unable to pass certain obstacles";
	    cout<<", you may\nneed to find an item or ability first.\n";
	    lati=lati+5;}
      }

    if ((longi==10)&&(lati==5))
      {cout<<"There is a small door in the wall. It is not locked.\n";}

    if ((((longi==10)&&(lati==5))&&(action=="go through door"))||(((longi==10)&&(lati==5))&&(action=="open door"))||(((longi==10)&&(lati==5))&&(action=="open"))||((longi==15)&&(lati==5)))
      {longi=15;
	lati=5;
	cout<<"You go through the doorway and see a large room with\ndoors to the north and the south.\n";
	if(h<=1)
	  {cout<<"\n\nYou can bring up your status by pressing 'p' \n";
	    cout<<"and your inventory by pressing 'i'.\n";
	    cout<<"You start with a flask and some herbs.\n";
	    h=2;}}

    if ((longi==15)&&(lati==0))
      {cout<<"There is a door in the wall. It is unlocked.\n";
	cout<<"there are signs of a struggle nearby with gouges in the rock\n";
	cout<<"and small puddles of blood.\n";}

    if((((longi==15)&&(lati==-10))&&(action=="open door"))||(((longi==15)&&(lati==-10))&&(action=="go through door"))||(((longi==15)&&(lati==-10))&&(action=="open"))||((longi==15)&&(lati==-15)))
      {lati=-15;
	cout<<"You see more bloodshed and signs of battle in this room.\n";
	cout<<"There is a large metal door to the south. It is hard to tell \n";
	cout<<"with the poor light but it looks gold in color.\n";
	cout<<"There is a small pool that looks like it may have healing powers.\n";}

    if((longi==15)&&(lati==10))
      {cout<<"There is a small door here. It is unlocked.\n";}

    if((((longi==15)&&(lati==10))&&(action=="open"))||(((longi==15)&&(lati==10))&&(action=="open door"))||(((longi==15)&&(lati==10))&&(action=="go through door"))||((longi==15)&&(lati==15)))
      {lati=15;
	cout<<"You go through the door and find yourself in a large room.\n";
	cout<<"You can move north.\n";}

    if((longi==15)&&(lati==20))
      {cout<<"You are in the middle of the room.\n";
	cout<<"There are doors to the west and east.\n";}

    if((longi==20)&&(lati==20))
      {cout<<"There is a small door. It is unlocked.\n";
       cout<<"There seems to be a cold breeze coming from behind the door.\n";}

    if((longi==10)&&(lati==20))
      {cout<<"There is a small door. It is unlocked.\n";}

    if((((longi==10)&&(lati==20))&&(action=="open"))||(((longi==10)&&(lati==20))&&(action=="open door"))||(((longi==10)&&(lati==20))&&(action=="go through door"))||((longi==5)&&(lati==20)))
      {longi=5;
	cout<<"You go through the door.\n";
	cout<<"You are in the center of a small room. There are doors to the north and the west.\n";}

      if((longi==0)&&(lati==20))
	{cout<<"There is a shop here!.\n";
	  while(1)
	    {cout<<"Do you want to shop here?   y/n\n";
	      std::getline(std::cin,action);
	      if((action=="N")||(action=="n"))
		{cout<<"You leave the shop and go back to the other room.\n";
		  longi=longi+5;
		  break;}
	      if((action=="y")||(action=="Y"))
		{while(1)
		    {cout<<"The shop owner sees you and asks you if you want to buy or sell.\n";
		      cout<<"1  --Buy      2  --Sell      3  --Leave\n";
		      std::getline(std::cin,action);
		      if((action=="3")||(action=="Leave")||(action=="leave"))
			{cout<<"You leave the shop.\n";
			  break;}

		      //buy menu
		      if((action=="1")||(action=="Buy")||(action=="buy"))
			{cout<<"The shopkeeper pulls out his wares.\n";
			  cout<<"1  --Herbs   5 gil      2  --Flasks   20 gil     3  --Wood Sheild\n";}
		      
		    }}
	
	      if((action=="3")||(action=="Leave")||(action=="leave"))
		{longi=longi+5;
		  break;}
	    }}

    if((((longi==15)&&(lati==-5))&&(action=="drink"))||(((longi==15)&&(lati==-5))&&(action=="drink from pool")))
      {cout<<"You drink from the pool. The magic in its waters heals your wounds.\n";
	cout<<"You healed "<<pmaxhealth-phealth<<" hit points.\n";
	phealth=pmaxhealth;}

    if((longi==15)&&(lati==-10))
      {cout<<"There is a large door made out of gold.\n";
	cout<<"You can see a small keyhole on the door.\n";
	if(key1==0)
	  {cout<<"You cannot open this door without the gold key.\n";
	    cout<<"You go back to where you were.\n";
	    lati=lati+5;}
	if(key1==1){cout<<"You have the key to this door.\n";}}

    if((((longi==15)&&(lati==-10))&&(action=="open"))||(((longi==15)&&(lati==-10))&&(action=="open door"))||(((longi==15)&&(lati==-10))&&(action=="go through door"))||(((longi==15)&&(lati==-10))&&(action=="use key"))||(((longi==15)&&(lati==-10))&&(action=="unlock"))||(((longi==15)&&(lati==-10))&&(action=="unlock door"))||((longi==15)&&(lati==-15)))
      {longi=15;
	lati=-15;
	cout<<"You move through the doorway. The room beyond is quiet and dead\nbodies line the edges.\n";
	cout<<"There is a small opening to the east.\n";}

    if((longi==20)&&(lati==-15))
      {cout<<"Through the small doorway you see only darkness, but a \n";
	cout<<"shudder up your back tells you it is anything but empty.\n";}

    if ((longi==20)&&(lati==0))
      {cout<<"There is a small alcove off to the right. You see a small chest";
	cout<<"inside.\n";}
    
    if((((longi==20)&&(lati==0)&&(action=="open chest"))||((longi==20)&&(lati==0)&&(action=="open")))&&chest1==0)
      {cout<<"You open the chest. There were 2 herbs in it.\n";
	herb=herb+2;
      chest1=1}

    if((longi==30)&&(lati==-15))
      {cout<<"You see a chest.\n";}

    if((((longi==30)&&(lati==-15)&&(action=="open chest"))||((longi==30)&&(lati==-15)&&(action=="open")))&&chest2==0)
      {cout<<"You open the chest. There was a steel sword in it.\n";
	steelswrd=1;
      chest2=1}

    if((longi==30)&&(lati==-20))
      {cout<<"You see a chest.\n";}

    if((((longi==30)&&(lati==-20)&&(action=="open chest"))||((longi==30)&&(lati==-20)&&(action=="open")))&&chest3==0)
      {cout<<"You open the chest. There was a set of swimming gear in it!\n";
	cout<<"You get the swimming gear! Now you can dive in deep water.\n";
	swim=1;
      chest3=1}

    if((longi==30)&&(lati==-10))
      {cout<<"You see a chest.\n";}

    if((((longi==30)&&(lati==-10)&&(action=="open chest"))||((longi==30)&&(lati==-10)&&(action=="open")))&&chest4==0)
      {cout<<"You open the chest. There was a silver key in it.\n";
	key2=1;
      chest4=1}

    if ((i%6==0)||(i%8==0))
      {cout<<"\n\nA monster appears!\n";
	int mhealth= 2*(level+1);
	battle[2]=2+(level);
	battle[3]=2+(level);
	int mexp=(level+3)*2;
	int mgil=level*10;
	while(1)
	  {battle[1]=armordef+2;
	    if (mhealth>=0)
	      {cout<<"\n\n          Generic monster\n";
		cout<<"             HP  "<<mhealth<<endl;
		cout<<"\n         "<<name<<" ";
		if (gender=="female"){cout<<type<<" ♀ \n";}
		if (gender=="male"){cout<<type<<" ♂ \n";}
		cout<<"             HP  "<<phealth<<"/"<<pmaxhealth<<endl;
		while(1)
		  {cout<<"What will you do?\n1 - Attack      2 - Items      3 - Defend\n";
		    std::getline(std::cin,action);
		    if ((action=="1")||(action=="attack")||(action=="Attack"))
		      {if((battle[0]-battle[3])>=0)
			  {cout<<"You attack the monster doing "<<battle[0]-battle[3]<<" damage!\n";
			    mhealth=mhealth-(battle[0]-battle[3]);
			    break;}
			if((battle[0]-battle-[3])<=0)
			  {cout<<"You attack but do no damage.\n";
			    break;}}
		    
		    if ((action=="3")||(action=="defend")||(action=="Defend"))
		      {cout<<"You defend!\n";
			battle[1]= battle[1]+level;
			break;}
		    
		    if ((action=="2")||(action=="items")||(action=="Items"))
		      {cout<<"You open your bag. You have:\n";
			if (item[0]>0){cout<<item[0]<<" herb/s ";}
			if (item[1]>0){cout<<item[1]<<" flask/s ";}
			cout<<"Type the item to use or type q to choose a different action.\n";
			std::getline(std::cin,action);		
			if (((action=="herb")||(action=="herbs")||(action=="use herb")||(action=="use herbs"))&&(item[0]>=0))
			  {int sums=(pmaxhealth-phealth)-5;
			    int heal;
			    if(sums>=0){heal=5;}
			    if(sums<0){heal=5-sums;}
			    cout<<"You use an herb. You regain "<<heal<<" hit points.\n";
			    phealth=phealth+5;
			    item[0]=item[0]-1;
			    if(phealth>pmaxhealth)
			      {phealth=pmaxhealth;}
			    break;}
			if(((action=="flasks")||(action=="flask")||(action=="use flasks")||(action=="use flask"))&&(item[1]>=0))
			  {int sums=(pmaxhealth-phealth)-10;
			    int heal;
			    if(sums>=0){heal=10;}
			    if(sums<0){heal=10-sums;}
			    cout<<"You use a flask. You regain "<<heal<<" hit points.\n";
			    phealth=phealth+10;
			    phealth<=pmaxhealth;
			    break;}}
		  }
		if(mhealth>0)
		  {if ((battle[2]-battle[1])>0)
		      {cout<<"The monster attacks you. It does "<<battle[2]-battle[1]<<" damage to you.\n";
			phealth=phealth-(battle[2]-battle[1]);
			if(phealth<=0)
			  {cout<<"You have no remaining health. You die.\n";
			    break;}}
		    if((battle[2]-battle[1])<=0)
		      {cout<<"The monster attacks you but does no damage.\n";}}
	      }
	    if (mhealth<=0)
	      {cout<<"You killed the monster!\n";
		cout<<"You gained "<<mexp<<" experience points and "<<mgil<<" gold!\n";
		gil=gil+mgil;
		exp=exp+mexp;
		break;}}}

    if(phealth<=0)
      {cout<<"GAME OVER\n\n";
	cout<<"Thank you for playing.";
	break;}

      }
  return 0;
}
