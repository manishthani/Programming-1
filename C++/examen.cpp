

int cicles( vector<int>& v){
	int n = v.size();
	int cont = 0; 
	vector<bool> aux(n,false);
	for(int i = 0; i < n; ++i){
		int j = i;
		if ( not aux[j]){
			++cont;
			while(not aux[j]){
				aux[j] = true;
				j = v[j];
			}
		}
	}
	return cont;
}