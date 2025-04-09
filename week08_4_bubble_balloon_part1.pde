//week08_4_bubble_balloon_part1
//用mouse吹氣球
void setup(){
  size(400,400);//大小
}
int x,y,s;
void draw(){
    background(255);//白色的背景
    ellipse(x,y,s,s);
    if(mousePressed) s++;
}
void mousePressed(){
    x = mouseX;
    y = mouseY;
    s = 1;
}
