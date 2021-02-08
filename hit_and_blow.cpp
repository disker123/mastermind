class codex {
    public:
    char key1;
    char key2;
    char key3;
    char key4;
    int hit = 0;
    int blow = 0;
    codex(char k1, char k2, char k3, char k4){
        key1 = k1;
        key2 = k2;
        key3 = k3;
        key4 = k4;
    }
    void check codex(string guess){
        for (int i = 0; i <= 3; i++) { 
            if(guess[i] == key1 || guess[i] == key2 || guess[i] == key3 || guess[i] == key4){
                blow++;
            }
            switch(i){
                case 1:
                if(guess == key1){
                    hit++;
                    blow--;
                }
                case 2:
                if(guess == key2){
                    hit++;
                    blow--;
                }
                case 3:
                if(guess == key3){
                    hit++;
                    blow--;
                }
                case 4:
                if(guess == key4){
                    hit++;
                    blow--;
                }
            }
        }
    }

    void result(){
        cout << hit << " hits    " << blow << " blows";
    }







}

int main(){
    codex my_codex('r', 'g', 'b', 'r');
    
}