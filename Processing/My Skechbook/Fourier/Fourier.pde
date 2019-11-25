
int t = 0;
int n=100;
int m=500;
float x = 0.0;
float y = 0.0;
float lex=50.0;
float flex=1;
void setup() {
	size(400, 500);
	background(0);

}
void draw() {
	background(255);
	resetMatrix();
	applyMatrix((lex),(0.0),(0*width/2),(0.0),(-1.0*lex),(2*height/2));
	//line(1, 1, 7, 10);
	strokeWeight(1/lex);
	stroke(0);
	noFill();
	beginShape();
	for (int i = 0; i < t; ++i) {
		x=0;
		int k=0;
		for(int j=0;j<2*m+1;j++,k++){
			if(k==0){
				x+=((float)data[0][0])*cos(2*PI*k*i/n)-((float)data[0][1])*sin(2*PI*k*i/n);
				//print(data[0][0]+"cos"+k+"-"+data[0][1]+"sin"+k);
			}
			else {
				x+=((float)data[j][0])*cos(2*PI*k*i/n)-((float)data[j][1])*sin(2*PI*k*i/n);
				//print("+"+data[j][0]+"cos"+(-k)+"-"+data[j][1]+"sin"+(-k));
				j++;
				x+=((float)data[j][0])*cos(2*PI*(-k)*i/n)-((float)data[j][1])*sin(2*PI*(-k)*i/n);
				//print("+"+data[j][0]+"cos"+k+"-"+data[j][1]+"sin"+k);
			}
		}
		//println("");
		y=0;
		k=0;
		for(int j=0;j<2*m+1;j++,k++){
			if(k==0)
				y+=((float)data[0][0])*sin(2*PI*k*i/n)+((float)data[0][1])*cos(2*PI*k*i/n);
			else {
				y+=((float)data[j][0])*sin(2*PI*k*i/n)+((float)data[j][1])*cos(2*PI*k*i/n);
				j++;
				y+=((float)data[j][0])*sin(2*PI*-k*i/n)+((float)data[j][1])*cos(2*PI*-k*i/n);
			}
		}
		x=x*flex;
		y=y*flex;
		vertex(x, y);
		//println(x+" "+y);
	}
	endShape();
	t+=1;
	if(t>=n)
		t=n+1;
	delay(0);
}
