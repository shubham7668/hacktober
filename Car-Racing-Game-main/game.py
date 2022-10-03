"""
ROHIT VANWANI
"""
import pygame 
import time
import random
 
pygame.init()
display_width = 800
display_height = 600

orange = (250,160,25)
yellow = (243,207,24)
black = (0,0,0)
white = (255,255,255)
green = (0,125,0) 
red = (225,0,0)
blue = (0,0,225)

car_width = 50
car_height = 100

start = pygame.mixer.Sound('start.wav')
boom = pygame.mixer.Sound('boom.wav')
#pygame.mixer.music.load("race.mp3")
gameDisplay = pygame.display.set_mode((display_width,display_height))
pygame.display.set_caption("Car Racing")
clock  = pygame.time.Clock()

carImg = pygame.image.load("car1.png")
car2Img = pygame.image.load("car2.png")
bgImg = pygame.image.load("back2.jpg")
crash_img = pygame.image.load("crash.png")
background = pygame.image.load("rb.jpg")
pic = pygame.image.load("picture.png")
girl = pygame.image.load("girl.png")
girl_1 = pygame.image.load("girl_1.png")
flag = pygame.image.load("flag.png")
pic2 = pygame.image.load("picture2.png")
pic3 = pygame.image.load("picture3.png")

def pause(count):
    menu1_x = 200
    menu1_y = 400
    menu2_x = 500
    menu2_y = 400
    menu_width = 100
    menu_height = 50
    pause = True
    while pause:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                quit()
        gameDisplay.blit(background,(0,0))
        message_display("Pause",100,display_width/2,display_height/3)
        message_display("Your Score : " + str(count) ,40,display_width/2,display_height/2)
        pygame.draw.rect(gameDisplay,green,(200,400,100,50))
        pygame.draw.rect(gameDisplay,orange,(500,400,100,50))
        mouse = pygame.mouse.get_pos()
        click = pygame.mouse.get_pressed()
        if menu1_x < mouse[0] < menu1_x + menu_width and menu1_y < mouse[1] < menu1_y + menu_height:
            pygame.draw.rect(gameDisplay,blue,(200,400,100,50))
            #if click[0] == 1 :
             #   pygame.mixer.music.unpause()
              #  pause = False
                
        if menu2_x < mouse[0] < menu2_x + menu_width and menu2_y < mouse[1] < menu2_y + menu_height:
            pygame.draw.rect(gameDisplay,blue,(500,400,100,50))
            if click[0] == 1 :
                pygame.quit()
                
        message_display("Play", 40,menu1_x + menu_width/2 ,menu1_y + menu_height/2) 
        message_display("Quit",40,menu2_x + menu_width/2 ,menu2_y + menu_height/2)
        
        pygame.display.update()        
        clock.tick(10)        
    

def message_display(text,size,x,y):
    font = pygame.font.Font("freesansbold.ttf",size)
    text_surface , text_rectrangle = text_objects(text,font)
    text_rectrangle.center = (x,y)
    gameDisplay.blit(text_surface, text_rectrangle)
    
    
def text_objects(text , font):
    text_surface = font.render(text,True,black)
    return text_surface,text_surface.get_rect()
 
    
def highscore(count):
    font = pygame.font.SysFont(None,37)
    text = font.render("Score : " + str(count),True , black)
    gameDisplay.blit(text,(5,300))
    
    
def draw_things(thingx,thingy,thing):
    gameDisplay.blit(thing,(thingx,thingy))
    
def car(x,y):
    gameDisplay.blit(carImg,(x,y))
    
#def crash(x,y,):
 #   pygame.mixer.music.stop()
  #  gameDisplay.blit(crash_img,(x,y))
   # message_display("You Crashed",100,display_width/2,display_height/4)
    #pygame.mixer.Sound.play(boom)
    #pygame.display.update()
    #time.sleep(2)

def which_level(count):
    if count<= 500:
       Level= 1
    elif count<= 800:
       Level = 2
    elif count<= 1600:
       Level = 3   
    elif count<= 2400:
      Level = 4    
    elif count<= 3200:
      Level = 5
    elif count<= 4000:
      Level = 6
    elif count<= 5000:
      Level = 7
    elif count<= 6000:
      Level = 8
    elif count<=7000 :
      Level = 9
    else:
      Level='Top'
    
    font = pygame.font.SysFont(None,37)
    text = font.render("Level : " + str(Level),True , black)
    gameDisplay.blit(text,(640,500))    
    
    

def intro():
    intro = True
    menu1_x = 200
    menu1_y = 400
    menu2_x = 500
    menu2_y = 400
    menu_width = 100
    menu_height = 50
    start.play(-1)
    while intro:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                quit()
        pygame.display.set_icon(carImg)
        gameDisplay.blit(background,(0,0))
        gameDisplay.blit(pic,(330,0))
        gameDisplay.blit(pic2,(330+140,0))
        gameDisplay.blit(pic3,(330-140,0))
        
        message_display("- game by S.A.A",35,display_width/2,display_height/2)
        message_display("CAR RACING",100,display_width/2,display_height/3)
        pygame.draw.rect(gameDisplay,green,(200,400,100,50))
        pygame.draw.rect(gameDisplay,orange,(500,400,100,50))
        
        
        mouse = pygame.mouse.get_pos()
        click = pygame.mouse.get_pressed()
        if menu1_x < mouse[0] < menu1_x + menu_width and menu1_y < mouse[1] < menu1_y + menu_height:
            pygame.draw.rect(gameDisplay,blue,(200,400,100,50))
            if click[0] == 1 :
                start.stop()
                intro = False
                
        if menu2_x < mouse[0] < menu2_x + menu_width and menu2_y < mouse[1] < menu2_y + menu_height:
            pygame.draw.rect(gameDisplay,blue,(500,400,100,50))
            if click[0] == 1 :
                pygame.quit()
                
        message_display("Go", 40,menu1_x + menu_width/2 ,menu1_y + menu_height/2) 
        message_display("Exit",40,menu2_x + menu_width/2 ,menu2_y + menu_height/2)
        
        pygame.display.update()        
        clock.tick(50)        

def the_end(count):
    menu1_x = 200
    menu1_y = 400
    menu2_x = 500
    menu2_y = 400
    menu_width = 100
    menu_height = 50
    end = True
    while end:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                quit()
        gameDisplay.blit(background,(0,0))
        message_display("Do you want to quit the game ?",50,display_width/2,display_height/3)
        message_display("Your Score : " + str(count - 1) ,40,display_width/2,display_height/2)
        pygame.draw.rect(gameDisplay,green,(200,400,100,50))
        pygame.draw.rect(gameDisplay,orange,(500,400,100,50))
        mouse = pygame.mouse.get_pos()
        click = pygame.mouse.get_pressed()
        if menu1_x < mouse[0] < menu1_x + menu_width and menu1_y < mouse[1] < menu1_y + menu_height:
            pygame.draw.rect(gameDisplay,blue,(200,400,100,50))
            if click[0] == 1 :
               pygame.quit()
               
               
              
                
        if menu2_x < mouse[0] < menu2_x + menu_width and menu2_y < mouse[1] < menu2_y + menu_height:
            pygame.draw.rect(gameDisplay,blue,(500,400,100,50))
            if click[0] == 1 :
                gameloop()
               
                
        message_display("Yes", 40,menu1_x + menu_width/2 ,menu1_y + menu_height/2) 
        message_display("No",40,menu2_x + menu_width/2 ,menu2_y + menu_height/2)
        pygame.display.update()        
        clock.tick(50)     

def level(count):
    if count<= 500:
        thing_speed = 3
    elif count<= 800:
       thing_speed = 4
    elif count<= 1600:
      thing_speed = 5  
    elif count<= 2400:
      thing_speed = 6    
    elif count<= 3200:
      thing_speed = 7
    elif count<= 4000:
      thing_speed = 7
    elif count<= 5000:
      thing_speed = 8
    elif count<= 6000:
      thing_speed = 8
    elif count<=7000 :
      thing_speed = 9
    else:
      thing_speed=10
    
    return thing_speed
    


def gameloop():
    #pygame.mixer.music.play(-1)
    bg_x1 = (display_width/2) - 360/2
    bg_x2 = (display_width/2) - 360/2
    bg_y1 = 0
    bg_y2 = -600
    bg_speed = 12
    car_x = display_width/2 - car_width/2
    car_y = display_height - car_height
    road_start_x = display_width/2 - 112
    road_end_x = display_width/2 + 112
    car_x_change = 0
    thing_startx_1 = random.randrange(road_start_x,road_end_x-car_width)
    thing_starty_1 = -400
    thing_startx_2 = random.randrange(road_start_x,road_end_x-car_width)
    thing_starty_2 = -800
    thingw = 50
    thingh = 100
    thing_speed = 1
    count = 0
    gameExit = False
    
    while not gameExit:
        for event in pygame.event.get():
           if event.type == pygame.QUIT:
               gameExit = True
               pygame.quit()
               quit()
               
           if event.type == pygame.KEYDOWN:         
                if event.key == pygame.K_LEFT:
                    car_x_change = -5
                elif event.key == pygame.K_RIGHT:
                     car_x_change = 5
                     
           if event.type == pygame.KEYUP:
               if event.key == pygame.K_LEFT or  event.key == pygame.K_RIGHT:
                   car_x_change = 0
                  
                   
                
        car_x += car_x_change
        
    
        if car_x > road_end_x - car_width:
            crash(car_x,car_y)
            the_end(count)
            
        if car_x < road_start_x:
            crash(car_x- car_width, car_y)
            the_end(count)
            
        if car_y < thing_starty_1 + thingh:
            if car_x >= thing_startx_1 and car_x <= thing_startx_1 + thingw:
                crash(car_x - 25, car_y - car_height/2)
                the_end(count)
            
            if car_x +car_width >= thing_startx_1 and car_x + car_width <= thing_startx_1 + thingw:
                crash(car_x, car_y - car_height/2)
                the_end(count)  

                 
        if car_y < thing_starty_2 + thingh:
            if car_x >= thing_startx_2 and car_x <= thing_startx_2 + thingw:
                crash(car_x - 25, car_y - car_height/2)
                the_end(count)
            
            if car_x +car_width >= thing_startx_2 and car_x + car_width <= thing_startx_2 + thingw:
                crash(car_x, car_y - car_height/2)
                the_end(count)              
                        
        gameDisplay.fill(orange)
        gameDisplay.blit(girl_1,(5,35))
        gameDisplay.blit(girl,(5,350))
        gameDisplay.blit(flag,(640,60))
      
        pygame.draw.rect(gameDisplay,blue,(635,200,100,50))
        mouse = pygame.mouse.get_pos()
        click = pygame.mouse.get_pressed()
        if (635 < mouse[0] < 635 + 100 ) and (200 < mouse[1] < 200 + 50):
            pygame.draw.rect(gameDisplay,red,(635,200,100,50))
            if click[0] == 1 :
               pygame.quit()
        
        pygame.draw.rect(gameDisplay,blue,(635,350,100,50))
        if (635 < mouse[0] < 635 + 100 ) and (350 < mouse[1] < 350 + 50):
            pygame.draw.rect(gameDisplay,red,(635,350,100,50))
            if click[0] == 1 :
                #pygame.mixer.music.pause()
                pause(count)
                
                
        message_display("Quit",30 ,685 ,225)        
        message_display("Pause",30 ,685,375)
        gameDisplay.blit(bgImg,(bg_x1,bg_y1))
        gameDisplay.blit(bgImg,(bg_x2,bg_y2))
        car(car_x,car_y)
        draw_things(thing_startx_1, thing_starty_1, car2Img)
        draw_things(thing_startx_2, thing_starty_2, car2Img)
        highscore(count)
        which_level(count)
        count+=1
        thing_starty_1 += level(count)
        thing_starty_2 += level(count)
        
        
        if thing_starty_1 >= display_height:
            thing_startx_1 = random.randrange(road_start_x,road_end_x-car_width)
            thing_starty_1 = -100
            
            
        if thing_starty_2 >= display_height:
            thing_startx_2 = random.randrange(road_start_x,road_end_x-car_width)
            thing_starty_2 = -100
            
            
        bg_y1 += bg_speed
        bg_y2 += bg_speed
        
        if bg_y1 >= display_height:
            bg_y1 = -600
        if bg_y2 >= display_height:
            bg_y2 = -600
            
            
        pygame.display.update()
        clock.tick(60)

intro()
gameloop()               
 

    
    
    
    
    
    
               
