import processing.pdf.*;

long collatz(long n){
	if(n%2==0){
		return n/2;
	}
	else {
		return (n*3+1);
	}
}
void setup() {
	size(1020, 1020);
	beginRecord(PDF,"collatz2.pdf");
	background(0);
	/*translate(0,height/2);
	stroke(255);
	line(0, 0, 50, 0);
	translate(50, 0);
	rotate(PI/4);
	line(0, 0, 50, 0);*/
	for(long i=1;i<10000;i++){
		long num=i;
		LongList sqn=new LongList();
		do{
			sqn.append(num);
			num=collatz(num);
		}while (num!=1);
		sqn.append(1);
		sqn.reverse();

		float len=6.5;
		float ang=PI/16;

		resetMatrix();
		translate(width/16*8,height/16*5);

		stroke(255);
		line(0, 0, len, 0);
		translate(len, 0);

		for(int j=1;j<sqn.size();j++){
			if(sqn.get(j)%2==0){
				stroke(255,50);
				rotate(ang);
				line(0, 0, len, 0);
				translate(len, 0);
			}
			else{
				stroke(255,255,0,50);
				rotate(-ang);
				line(0, 0, len, 0);
				translate(len, 0);
			}

		}
	}
	endRecord();
	println("DONE");
}

void draw() {
	
}