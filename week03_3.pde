//week03_3_void_setup_draw_if_mousePressed_else
void setup() {
  size(400,400);
}
void draw(){//畫圖，每秒畫60次
  if(mousePressed) background(255,0,0);//紅色
  else background(0,255,0);//綠色
}
