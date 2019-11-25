void setup() {
	size(512, 512);
}

	float t = 0.0;

	void draw() {
		background(255, 255, 255);
		line(0, 0,50*cos(t), 50*sin(t));
		t+=.05;
	}

