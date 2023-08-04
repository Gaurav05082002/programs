void rec(int level){
    //base case 
    if(level==n){
       
        for(auto v: sol){
            cout<<v<<
;
        }
    }
    //recursive case 
    for (let i = 0; i < array.length; i++) {
        //loop over the CHOICE
        //CHECK the level you reached 
        if(check(level)){
             Sol.push_back(arr[level]);
             //MOVE
             rec(level+1);
             sol.pop_back();
        }
    }
    
}