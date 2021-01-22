public int FirstNotRepeatingChar(String str){
	int[] cnts = new int[128];
	for (int i = 0;i < str.length();i++)
		cnts[str.charAt(i)]++;
	for (int i = 0;i < str.length();i++)
		if (cnts[str.charAt(i)] == 1)
			return i;
		return -1;
}


/*ÁíÒ»½â·¨

public int 	FirstNotRepeatingChar2(String str){
	BitSet bs1 = new BitSet(128);
	BitSet bs2 = new BitSet(128);
	for (char c : str.toCharArray()){
		if (!bs1.get(c) && !bs2.get(c))
			bs1.set(c);
		else if (bs1.get(c) && !bs2.get(c))
			bs2.set(c);
	}
	for (int i = 0;i < str.length();i++){
		char c = str.charAt(i);
		if (bs1.get(c) && !ba2.get(c))
			return i;
	}
	for (int i = 0; i < str.length();i++){
		char c = str.charAt(i);
		if (bs1.get(c) && !bs2.get(c))
			return i;
	}
	return -1;
}








*/ 
