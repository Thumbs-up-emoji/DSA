void solve(DSA_Vector& v){
    // *************************************************
    // WRITE YOUR CODE HERE
    int max=v.GetElement(0),min=v.GetElement(0);
    for(int i=0;i<v.Size();i++){
        max=max>=v.GetElement(i)?max:v.GetElement(i);
        min=min<v.GetElement(i)?min:v.GetElement(i);
    }
    //The indices printed below are wrong
    cout<<max<<"=max, "<<min<<"=min "<<endl;

    // *************************************************
}
