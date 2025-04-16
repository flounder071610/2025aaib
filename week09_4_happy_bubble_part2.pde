//week09_4_happy_bubble_part2
void setup(){
    size(400,400);
}
void draw(){
  size(400,400);
  stroke(182,74,113); //線的色彩
  strokeWeight(10); //粗細
  fill(220,21,77); //填充色彩
  rect(0,0,400,400,50); //多了50的弧度
  for(int i=100;i<=300;i+=100) line(0,i,400,i); //橫線1
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      int x = 50+j*100,  y = 50+i*100;
      stroke(179,32,50); //線的色彩
      fill(220,21,77); //填充色彩
      strokeWeight(4);
      ellipse(x,y,60,60);
      noStroke();
      fill(228,71,41);
      ellipse(x,y,20,20);
      }
    }
}
