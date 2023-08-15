using System;

class Test{

	static void Main(){
		string a,b;
		Split("Sohn Yick",out a,out b);
		Console.WriteLine(a);
		Console.WriteLine(b);
	}

	static void Split(string name,out string fname,out string lname){

		int i = name.LastIndexOf(' ');
		fname = name.Substring(0,i);
		lname = name.Substring(i+1);
	}
	
}
