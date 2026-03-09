#include<bits/stdc++.h>
using namespace std;
struct game2048{
    //datastructures
    int board[4][4];
    //transitions or funcitons
    //helper functions
    bool move_end(){
        if(game_ended()){
            return true; //no empty cell
        }else {             //empty cell is there
            random_populate();
            return false;
        }
    }
    bool game_ended(){
        //if there exists atleast one empty cell game hasn't ended 
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(board[i][j]==0){
                    return false;
                }
            }
        }return false;
    }
    void random_populate(){
        // can be called only if the board has atleast 1 empty cell
        while(true){
            int i=rand()%4;
            int j=rand()%4;
            //cout<<i<<" "<<j<<"\n";
            if(board[i][j]==0){
                int choice=rand()%2;
                if(choice) board[i][j]=2;
                else board[i][j]=4;
                return; //necessary as inf loop 
            }
        }
        
    }
    void swipe_r(int a[]){
        int last_placed=4; //one after the last element is last placed initially
        bool can_merge = false; // can we merge with the element at last placed (NO initially)
        for(int i=3;i>=0;i--){
            if(a[i]!=0){
                if(can_merge && a[i]==a[last_placed]){
                    a[last_placed]*=2;
                    can_merge=false; //already one merge happened for this idx
                    if(i!=last_placed) a[i]=0;
                }else{  
                    //shift the element to the place before last place i.e. at idx lastplace-1
                    last_placed--;
                    a[last_placed]=a[i];
                    if(i!=last_placed) a[i]=0;
                    can_merge=true; //no merged has happend so merge can happen for this idx
                }
            }
        }
    }
    //
    void init(){
        //initialise mandate for local array
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                board[i][j]=0;
            }
        }
        /*
        int b[]={16,0, 2, 16 };
        swipe_r(b);
        for(auto x:b)cout<<x<<", ";
        cout<<endl;*/
        random_populate();
        random_populate();
    }
    void print(){
        cout<<"\n\n";
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(board[i][j]){
                    cout<<board[i][j]<<"\t";
                }else cout<<".\t";
            }
            cout<<endl;
        }
    }
    
    bool up(){
        for(int col=0;col<4;col++){
            int temp[4];
            for(int row=0;row<4;row++){
                temp[3-row]=board[row][col];
            }
            swipe_r(temp);
            for(int row=0;row<4;row++){
                board[row][col]=temp[3-row];
            }
        }
        return move_end();  //returns true if game has ended !
    }
    bool down(){
        for(int col=0;col<4;col++){
            int temp[4];
            for(int row=0;row<4;row++){
                temp[row]=board[row][col];
            }
            swipe_r(temp);
            for(int row=0;row<4;row++){
                board[row][col]=temp[row];
            }
        }
        return move_end();
    }
    bool right(){
        for(int row=0;row<4;row++){
            int temp[4];
            for(int col=0;col<4;col++){
                temp[col]=board[row][col];
            }
            swipe_r(temp);
            for(int col=0;col<4;col++){
                board[row][col]=temp[col];
            }
        }
        return move_end();
    }
    bool left(){
        for(int row=0;row<4;row++){
            int temp[4];
            for(int col=0;col<4;col++){
                temp[3-col]=board[row][col];
            }
            swipe_r(temp);
            for(int col=0;col<4;col++){
                board[row][col]=temp[3-col];
            }
        }
        return move_end();
    }
};
signed main(){
    srand(time(0));  //seeding the rand function
    game2048 mygame;
    mygame.init();
    while(true){
        mygame.print();
        cout<<"What Move {U,D,R,L}: \n";
        char ch;cin>>ch;

        bool ended;
        if(ch=='U'){
            ended=mygame.up();
        }else if(ch == 'D'){
            ended=mygame.down();
        }else if(ch=='L'){
            ended=mygame.left();
        }else if(ch=='R'){
            ended=mygame.right();
        }else{
            cout<<"Invalid game\n";
        }

        if(ended){
            mygame.print();
            cout<<"Game Over !! \n";
            return 0;
        }
    }

}
