#include<iostream>
using namespace std;
#define clear() cout<<"\033[H\033[J";
time_t now;
struct tm *right_now;
class Manual
{
	protected:        //Data Members
	float brightness;
	float intensity;
    public:         //Member Functions
	void display()
	{
        cout<<"\n\tTime: "<<right_now->tm_hour<<":"<<right_now->tm_min<<":"<<right_now->tm_sec<<"\n";
		cout<<"\n\t\tBrightness: "<<brightness<<" %.";
        cout<<"\n\t\tIntensity: "<<intensity<<" lux.\n";
	}
	void Manual_mode()
	{
        time(&now);
        right_now=localtime(&now);
		cout<<"\n\t\t------------------ Manual Mode ------------------\n\n";
		bright:
		cout<<"\n\tAdjust Brightness of Light( 10 - 100 )%: ";
		cin>>brightness;
		if(brightness<10||brightness>100)
		{
			cout<<"\n\tWrong input. Try again!!! ";
			goto bright;
		}
		intens:
		cout<<"\n\tAdjust Intensity of Light( 30 - 1000 )lux: ";
		cin>>intensity;
                if(intensity<30||intensity>1000)
                {       
                        cout<<"\n\tWrong input. Try again!!! ";
                        goto intens;
                }
		clear();
		cout<<"\n\t\t------------------ Manual Mode ------------------\n\n";
        display();
	}
};
class Automatic: private Manual
{
    private:        //Data Members
    public:         //Member Functions
    void Automatic_mode()
    {
        time(&now);
        right_now=localtime(&now);
        cout<<"\n\t\t------------------ Automatic Mode ------------------\n\n";
        if(right_now->tm_hour>=00 && right_now->tm_hour<06 )
        {
            brightness= 40;
            intensity= 30;
            display();
        }
        else if(right_now->tm_hour>=06 && right_now->tm_hour<11 )
        {
            brightness= 55;
            intensity= 150;
            display();
        }
        else if(right_now->tm_hour>=11 && right_now->tm_hour<18 )
        {
            brightness= 75;
            intensity= 500;
            display();
        }
        else
        {
            brightness= 55;
            intensity= 30;
            display();
        }
    }
};
class Focus: private Manual
{
    private:        //Data Members
    public:         //Member Functions
    void Focus_mode()
    {
        time(&now);
        right_now=localtime(&now);
        cout<<"\n\t\t------------------ Focus Mode ------------------\n\n";
        if(right_now->tm_hour>=00 && right_now->tm_hour<06 )
        {
            brightness= 40;
            intensity= 150;
            display();
        }
        else if(right_now->tm_hour>=06 && right_now->tm_hour<11 )
        {
            brightness= 60;
            intensity= 90;
            display();
        }
        else if(right_now->tm_hour>=11 && right_now->tm_hour<17 )
        {
            brightness= 70;
            intensity= 120;
            display();
        }
        else
        {
            brightness= 100;
            intensity= 350;
            display();
        }
    }
};
class Read: private Manual
{
    private:        //Data Members
    public:         //Member Functions
    void Read_mode()
    {
        time(&now);
        right_now=localtime(&now);
        cout<<"\n\t\t------------------ Read Mode ------------------\n\n";
        if(right_now->tm_hour>=00 && right_now->tm_hour<06 )
        {
            brightness= 90;
            intensity= 500;
            display();
        }
        else if(right_now->tm_hour>=06 && right_now->tm_hour<11 )
        {
            brightness= 50;
            intensity= 300;
            display();
        }
        else if(right_now->tm_hour>=11 && right_now->tm_hour<17 )
        {
            brightness=70 ;
            intensity= 300;
            display();
        }
        else
        {
            brightness=100 ;
            intensity= 600;
            display();
        }
    }
};
class Computer: private Manual
{
    private:        //Data Members
    public:         //Member Functions
    void Computer_mode()
    {
        time(&now);
        right_now=localtime(&now);
        cout<<"\n\t\t------------------ Computer Mode ------------------\n\n";
        if(right_now->tm_hour>=00 && right_now->tm_hour<06 )
        {
            brightness= 50;
            intensity= 300;
            display();
        }
        else if(right_now->tm_hour>=06 && right_now->tm_hour<11 )
        {
            brightness= 20;
            intensity= 200;
            display();
        }
        else if(right_now->tm_hour>=11 && right_now->tm_hour<17 )
        {
            brightness= 20;
            intensity= 200;
            display();
        }
        else
        {
            brightness= 50;
            intensity= 300;
            display();
        }
    }
};
class Child: private Manual
{
    private:        //Data Members
    public:         //Member Functions
    void Child_mode()
    {
        time(&now);
        right_now=localtime(&now);
        cout<<"\n\t\t------------------ Child Mode ------------------\n\n";
        if(right_now->tm_hour>=00 && right_now->tm_hour<06 )
        {
            brightness= 0;
            intensity= 0;
            display();
        }
        else if(right_now->tm_hour>=06 && right_now->tm_hour<11 )
        {
            brightness= 50;
            intensity= 200;
            display();
        }
        else if(right_now->tm_hour>=11 && right_now->tm_hour<17 )
        {
            brightness= 65;
            intensity= 350;
            display();
        }
        else
        {
            brightness= 30;
            intensity= 200;
            display();
        }
    }
};
class Photo: private Manual
{
    private:        //Data Members
    public:         //Member Functions
    void Photo_mode()
    {
        time(&now);
        right_now=localtime(&now);
        cout<<"\n\t\t------------------ Photo Mode ------------------\n\n";
        if(right_now->tm_hour>=00 && right_now->tm_hour<06 )
        {
            brightness= 80;
            intensity= 450;
            display();
        }
        else if(right_now->tm_hour>=06 && right_now->tm_hour<11 )
        {
            brightness= 40;
            intensity= 150;
            display();
        }
        else if(right_now->tm_hour>=11 && right_now->tm_hour<17 )
        {
            brightness= 50;
            intensity= 180;
            display();
        }
        else
        {
            brightness= 90;
            intensity= 350;
            display();
        }
    }
};
void Guide()
{
    clear();
    cout<<"\n\t\t------------------- Guide -------------------\n\n";
    cout<<"\n\tAutomatic Mode:";
    cout<<"\n\tThe Automatic Mode adjusts the brightness and luminance sensitivity automatically according to time.\n";
    
    cout<<"\n\tManual Mode:";
    cout<<"\n\tThe Manual Mode allows the user to Adjust Brightness and Light Intensity manually.\n";
    
    cout<<"\n\tFocus Mode:";
    cout<<"\n\tThe Focus Mode uses a timer to break down work into intervals which allows user to become more efficient,";
    cout<<"\n\tand adds a sense of accomplishment to be more productive and protect the eyes.\n";
    
    cout<<"\n\tRead Mode:";
    cout<<"\n\tThe Read Mode adjusts the colour temprature to a neutral hue and proper brightness.\n ";
    
    cout<<"\n\tComputer Mode:";
    cout<<"\n\tThe Computer Mode protects eyes and ensures color temprature which indeed reduces the proportion of blue";
    cout<<"\n\tlight and protects human eye.\n";
    
    cout<<"\n\tChild Mode:";
    cout<<"\n\tThe Child Mode protects the children's eye from potential optical damage.\n";
    
    cout<<"\n\tPhoto Mode:";
    cout<<"\n\tThe Photo Mode enables proper lighting facility that enhances the photo clarity.\n";
    
    cout<<"\n\tGuide:";
    cout<<"\n\tThe Guide displays information about different light mode.\n\n";
}
int main()
{
    Manual M;
    Automatic A;
	Focus F;
    Read R;
    Computer C;
    Child Cld;
    Photo P;
    char conti[2];  //Continue Compare
    int menu_op;    //Menu Option
    int con=0;      //Continue Option
    while(con==0)
    {
        clear();
        cout<<"\n\t\t------------------ Smart Light ------------------\n\n";
        cout<<"\tEnter";
		cout<<"\n\t1: Manual Mode";
        cout<<"\n\t2: Automatic Mode";
        cout<<"\n\t3: Focus Mode";
        cout<<"\n\t4: Read Mode";
        cout<<"\n\t5: Computer Mode";
        cout<<"\n\t6: Child Mode";
        cout<<"\n\t7: Photo Mode";
        cout<<"\n\t8: Guide";
        cout<<"\n\t9: Exit";
        cout<<"\n\tEnter Option: ";
        cin>>menu_op;
        switch(menu_op)
        {
            case 1: M.Manual_mode();
                    break;
            case 2: A.Automatic_mode();
                    break;
            case 3: F.Focus_mode();
                    break;
            case 4: R.Read_mode();
                    break;
            case 5: C.Computer_mode();
                    break;
            case 6: Cld.Child_mode();
                    break;
            case 7: P.Photo_mode();
                    break;
            case 8: Guide();
                    break;
            case 9: return 0;
                    break;
            default: cout<<"\n\tWrong option. Try again!";
        }
        cout<<"\n\tDo You Want To Continue(Y/N): ";
        cin>>conti;
        if(strcmp("Y",conti)==0||strcmp("y",conti)==0)
        {
            con=0;
        }
        else if(strcmp("N",conti)==0||strcmp("n",conti)==0)
        {
            con=1;
        }
        else
        {
            cout<<"\n\tWrong Input !!!\n";
            con=0;
        }
    }
    return 0;
}
