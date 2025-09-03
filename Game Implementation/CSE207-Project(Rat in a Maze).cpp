//Rat in a Maze

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;


void game();
void welcome();


bool isvalid(int** arr, int row, int colu, int n)
{
    if(row<n && colu<n && arr[row][colu]==1)
    {
        return true;
    }
    return false;
}


bool ratinMaze(int** ar, int row, int colu, int n, int** solnAr)
{
    if(row==n-1 && colu==n-1)
    {
        solnAr[row][colu]=1;
        return true;
    }
    if(isvalid(ar, row, colu, n))
    {
        solnAr[row][colu]=1;
        if(ratinMaze(ar, row+1, colu, n, solnAr))
        {
            return true;
        }
        if(ratinMaze(ar, row, colu+1, n, solnAr))
        {
            return true;
        }
        solnAr[row][colu]=0;
        return false;
    }
    return false;
}


void menu(){
    system("cls");
	int ch;
    cout << endl
             << endl
             << endl;
        cout<<"\t\t             ================================================================\n";
    	cout<<"\t\t           :: ::                                                         :: ::\n";
    	cout<<"\t\t         ::   ::                                                         :: ::\n";
    	cout<<"\t\t         ::   ::                                                         :: ::\n";
    	cout<<"\t\t         ::   ::            Do you want to play the game?                :: ::\n";
    	cout<<"\t\t         ::   ::           -------------------------------               :: ::\n";
    	cout<<"\t\t         ::   ::                                                         :: ::\n";
    	cout<<"\t\t         ::   ::                   1. Play                               :: ::\n";
    	cout<<"\t\t         ::   ::                   2. Quit                               :: ::\n";
    	cout<<"\t\t         ::   ::                   3. About                              :: ::\n";
    	cout<<"\t\t         ::   ::                                                         :: ::\n";
    	cout<<"\t\t         ::   ::                                                         :: ::\n";
		cout<<"\t\t         ::==============================================================:: ::\n";
    	cout<<"\n\t\t                            Please enter your choice =  ";
    	cin >> ch;
    	cout<<"\n\t\t         ::==============================================================:: ::\n"; 
    switch(ch)
    {
    case 1 :
        system("cls");
        game();
        break;
    case 2 :
        system("cls");
        system("COLOR 02");
        cout << endl
             << endl
             << endl;
        cout<<"\t\t             ================================================================\n";
    	cout<<"\t\t           :: ::                                                         ::::\n";
    	cout<<"\t\t         ::   ::                                                        :: ::\n";
		cout<<"\t\t        ::============================================================::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::            Thanks for playing the game!              ::   ::\n";
    	cout<<"\t\t        ::    ::                Hope you liked it!                    ::   ::\n";
    	cout<<"\t\t        ::    ::                 Come again later.                    ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::                                                      ::   ::\n";
    	cout<<"\t\t        ::    ::======================================================::   ::\n";
    	cout<<"\t\t        ::   ::                                                      ::    ::\n";
    	cout<<"\t\t        ::  ::======================================================::    ::\n";
    	cout<<"\t\t        ::                                                              ::\n";
    	cout<<"\t\t        ::============================================================::\n";
        cout << endl;
        exit(0);
    case 3 : 
    	system("cls");
    	cout << endl
             << endl
             << endl;
    	cout<<"\t\t\t                   ____________________________________                \n";
        cout<<"\t\t\t                   |     ABOUT THE GAME DEVELOPER     |                \n";
        cout<<"\t\t\t       ____________|__________________________________|________________\n";
        cout<<"\t\t\t     * |           |                                  |              * |\n";
        cout<<"\t\t\t    *  |           |           Rat in a Maze          |            *   |\n";
        cout<<"\t\t\t   *___|___________|__________________________________|__________*     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                    Nushrat Zahan                        |     |\n";
        cout<<"\t\t\t   |   |                    ID: 2021-3-60-213                    |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |    A.B.M. Ilman Farabi          Raiyan Islam            |     |\n";
        cout<<"\t\t\t   |   |    ID: 2021-3-60-111            ID: 2021-3-60-219       |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |   |               USED LANGUAGE OF THIS GAME                |     |\n";
        cout<<"\t\t\t   |   |                 C++ PROGRAMMING LANGUAGE                |     |\n";
        cout<<"\t\t\t   |   |                                                         |     |\n";
        cout<<"\t\t\t   |___|_________________________________________________________|     |\n";
        cout<<"\t\t\t   *   |                                                           *   |\n";
        cout<<"\t\t\t    *  |                                                            *  |\n";
        cout<<"\t\t\t     * |                                                             * |\n";
        cout<<"\t\t\t       *_______________________________________________________________|\n";
    	cout << endl
    		<< endl
            << endl;
    	cout<<"\t\t\t   ";
		system("pause");
		menu();
		//exit(0);
    default :
        system("cls");
        system("COLOR 0c");
        cout << endl
            << endl
            <<endl; 
                cout<<"\t\t             ================================================================\n";
    			cout<<"\t\t           :: ::                                                         :: ::\n";
    			cout<<"\t\t         ::   ::                                                         :: ::\n";
    			cout<<"\t\t         ::   ::                    Invalid Input                        :: ::\n";
    			cout<<"\t\t         ::   ::                  Please try again!                      :: ::\n";
    			cout<<"\t\t         ::   ::                                                         :: ::\n";
    			cout<<"\t\t         ::   ::                                                         :: ::\n";
				cout<<"\t\t         ::==============================================================:: ::\n";
				cout << endl;
				cout<<"\n\t\t\t  ";
				system("pause");
				system("COLOR 03");
				menu();
				
    }
}


void game(){
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	stack<pair<int, int> > myStack;
	int n;
	cout << endl
                 << endl
                 << endl;
            cout<<"\t\t         ::================================================================::\n";
    		cout<<"\n\t\t            Enter the Maze Size : ";
    		cin >> n;
			cout<<"\n\t\t\t ::================================================================::\n";
    int** maze=new int*[n];
    for(int i=0; i<n; i++)
    {
        maze[i]=new int[n];
    }
    
    cout << endl
                 << endl
                 << endl;
            cout<<"\t\t         ::================================================================::\n";
    		cout<<"\n\t\t            Enter the Maze Structure using 0 or 1 : ";
    		cout<<"\n\n\t\t\t    ";
			for(int i=0; i<n; i++)
    		{
        		for(int j=0; j<n; j++)
        		{
					cin>>maze[i][j];
        		}
        		cout<<"\n\t\t\t    ";
    		}
            cout<<"\n\t\t         ::================================================================::\n";			
    
    int** solnMaze=new int*[n];
    for(int i=0; i<n; i++)
    {
        solnMaze[i] = new int[n];
        for(int j=0; j<n; j++)
        {
            solnMaze[i][j]=0;
        }
    }
    
    if(ratinMaze(maze, 0, 0, n, solnMaze))
    {
    	system("cls");
	    cout << endl
            << endl
			<< endl;
		cout<<"\t\t         ::================================================================::\n";
    	cout<<"\n\t\t            The Path, Rat can follow to reach the destination :           \n";
		cout<<"\n\t\t\t ::================================================================::\n";	
		cout<<"\n\t\t\t    ";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            if(solnMaze[i][j]==0)
            {
                SetConsoleTextAttribute(h, 2);
                cout<<solnMaze[i][j]<<" ";
			}
            else if (solnMaze[i][j]==1)
            {
               myStack.push({i, j});
			   SetConsoleTextAttribute(h, 4);
               cout<<solnMaze[i][j]<<" ";
            }
            cout<<"\n\t\t\t    ";
            cout<<"\n\t\t\t    ";
        }
        
        SetConsoleTextAttribute(h, 06);
        cout << "\n\t\t\t  Rath path using stack..."<<endl;
        while (!myStack.empty())
        {
            pair<int, int> p = myStack.top();
            myStack.pop();
            cout<<"\n\t\t\t  ";
            cout << "(" << p.first << ", " << p.second << ")" <<  "  ";
        }
        cout<<"\n\n\t\t\t  ";
        system("pause");
        system("COLOR 03");
        menu();
    }
    else
    {
       system("cls");
	   system("COLOR 04");
	   cout << endl
                     << endl
					 << endl;
                cout<<"\t\t             ================================================================\n";
    			cout<<"\t\t           :: ::                                                         :: ::\n";
    			cout<<"\t\t         ::   ::                                                         :: ::\n";
    			cout<<"\t\t         ::   ::                     Sorry!                              :: ::\n";
    			cout<<"\t\t         ::   ::            There is no path available.                  :: ::\n";
    			cout<<"\t\t         ::   ::                                                         :: ::\n";
    			cout<<"\t\t         ::   ::                                                         :: ::\n";
				cout<<"\t\t         ::==============================================================:: ::\n";
	   			cout << endl
             		 << endl;
    	cout<<"\n\t\t\t  ";
		system("pause");
    	system("COLOR 06");
		menu();
    }
    
}


void welcome(){
	system("color 06");
	cout << endl;
    cout<<"\t\t             ================================================================\n";
    cout<<"\t\t           :: ::                                                         ::::\n";
    cout<<"\t\t         ::   ::                                                        :: ::\n";
	cout<<"\t\t        ::============================================================::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                      Welcome!                        ::   ::\n";
    cout<<"\t\t        ::    ::                The Most Excited Game                 ::   ::\n";
    cout<<"\t\t        ::    ::                 || Rat in a Maze ||                  ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::                                                      ::   ::\n";
    cout<<"\t\t        ::    ::======================================================::   ::\n";
    cout<<"\t\t        ::   ::                                                      ::    ::\n";
    cout<<"\t\t        ::  ::======================================================::    ::\n";
    cout<<"\t\t        ::                                                              ::\n";
    cout<<"\t\t        ::============================================================::\n";
    cout << endl;
    cout<<"\t\t\t  ";
	system("pause");
    system("cls");
}


int main()
{
	welcome();
	menu();
}






//5

//1 0 1 0 1
//1 1 1 1 1
//0 1 0 1 0
//1 0 0 1 1
//1 1 1 0 1









