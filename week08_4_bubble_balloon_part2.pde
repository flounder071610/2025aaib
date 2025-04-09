//week08_4_bubble_balloon_part2
//用mouse吹氣球 放開mouse會往上飄
void setup(){
  size(400,400);  //大小
}
int x,y,s;   //氣球的座標&大小
void draw(){
    background(255);  //白色的背景
    ellipse(x,y-s/2,s*0.7,s);  //瘦瘦的氣球,接觸下方
    if(mousePressed) s++;
    else{  //沒有壓著就會往上飄
      if(y>s+1) y-=2;  //沒有撞到天花板就往上移
    }
}
void mousePressed(){  //按下mouse會改變氣球的位置&大小
    x = mouseX;
    y = mouseY;
    s = 1;  //大小設成1
}
