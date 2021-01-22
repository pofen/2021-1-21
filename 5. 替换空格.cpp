public string replaceSpace(StringBuffer str) (
	int p1 = str.length() - 1;
	for (int i = 0;i <= p1;i++)
		if (str.charAt(i) == ' ')
			str.append("");
	int P2 = str.length() - 1;
	while (p1 >= 0 && p2 > p1){
		char c = str.charAt(p1--);
		if(c == ' ') {
			str.setCharAt(P2--,'0');
			str.setCharAt(P2--,'2');
			str.setCharAt(P2--,'%');
		}else{
			str.setCharAt(P2--,c);
		}
	}
	return str.toString();
) 
