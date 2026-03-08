//Solution 1 : 
pair<int,int> swapping(int a,int b){
	swap(a,b);
	return make_pair({a,b});
}

//Solution 2: swaping without using inbuilt func and any third variable 
pair<int,int> swapping(int a,int b){
	a=a+b;  //a stores the sum of a and b
	b=a-b;  //sum - b gives the value of a into b
	a=a-b;  //sum - value of a gives the value of b into a
	return make_pair({a,b});
}
