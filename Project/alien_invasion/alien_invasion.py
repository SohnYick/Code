import sys
import pygame
from settings import Settings
from ship import Ship
import game_functions as gf
def run_game():

    # 初始化
    pygame.init()
    settings = Settings()

    # 创建屏幕并给定标题
    screen = pygame.display.set_mode((settings.screen_width,settings.screen_height))
    pygame.display.set_caption(settings.game_title)

    # 创建飞船
    ship = Ship(screen);
    
    # 游戏主循环
    while True:
        gf.check_events()
        gf.update_screen(settings,screen,ship)
        
run_game()

