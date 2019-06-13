        else if(type==2){
            if(!(len_x==9 && len_y==9 && num_mine==10 || len_x==14 && len_y==14 && num_mine==40 || len_x==14 && len_y==30 && num_mine==99)){
                return;
            }
            ///data
            char o;
            pro *newE;
            newE=(pro*)malloc(sizeof(pro));
            strcpy(newE->player_name,Name);
            newE->Time=time(NULL)-t_o;
            timedate(newE->fin_datetime);
            newE->serial=0;
            if(len_x==9 && len_y==9 && num_mine==10){
                if((fp=fopen("Easy.txt","ab"))==NULL){
                    printf("Error");
                    exit(1);
                }
                fclose(fp);
                o='e';
            }
            else if(len_x==14 && len_y==14 && num_mine==40){
                if((fp=fopen("Medium.txt","ab"))==NULL){
                    printf("Error");
                    exit(1);
                }
                fclose(fp);
                o='m';
            }
            else if(len_x==14 && len_y==30 && num_mine==99){
                if((fp=fopen("Hard.txt","ab"))==NULL){
                    printf("Error");
                    exit(1);
                }
                fclose(fp);
                o='h';
            }
            pro *start=NULL;
            start=proload(start,o);
            start=proinsert(start,newE,o);
            prosave(start,o);
        }
