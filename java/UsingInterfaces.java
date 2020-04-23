interface CarControl{
    int[] getPosition();
    void increaseXVelocity();
    void increaseYVelocity();
    void increaseZVelocity();
    void reduceXVelocity();
    void reduceYVelocity();
    void reduceZVelocity();

}
class SpaceController implements CarControl{
    int[] position = {0,0,0};
    
    @Override
    public void increaseXVelocity(){
        position[0] += 1;
    }
    @Override
    public void increaseYVelocity(){
        position[1]+=1;
    }
    @Override
    public void increaseZVelocity(){
        position[2]+=1;
    }    
    @Override
    public void reduceXVelocity(){
        position[0]-=1;
    }    
    @Override
    public void reduceYVelocity(){
        position[1]-=1;
    }    
    @Override
    public void reduceZVelocity(){
        position[2]-=1;
    }
    @Override
    public int[] getPosition(){
        return position;
    }

    public String toString(){
        return "x: "+position[0]+"\ny: "+position[1]+"\nz: "+position[2];
    }
}
class UsingInterfaces{
    public static void main(String[] args){
        SpaceController s = new SpaceController();
        s.increaseXVelocity();
        s.increaseYVelocity();
        s.increaseZVelocity();
        System.out.println(s.toString());
    }
}