//week06_4_fishX_fishY_for_many_x_y_for_k_N
//�{���ҥ��week03_4��week04_5
void setup(){
  size(600,400);
}
float fishX = 300, fishY = 200; //���y��
float[]x = new float[100]; //Java���}�C
float[]y = new float[100]; //�̦h��100�ӹ}��
int N = 0; //�ثe�O0���}��
void draw(){
  background(#c0ffee);
  for(int i=0;i<N;i++){ //for�j��
    ellipse(x[i],y[i],8,8); //�}�ƪ��}�C
    y[i]++;
    if(y[i]>400){ //�}�Ʊ��쩳���A�n�^��x[i]��y[i]
      for(int k=i;k<N-1;k++){ //��k��v�@�����h
        x[k] = x[k+1]; //��l���ȡA������
        y[k] = y[k+1];
      }
      N--; //��s�}�ƪ��`��N
    }
  }
  println(N);
  ellipse(fishX,fishY,30,10); //��
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
