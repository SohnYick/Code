import sys
import pygame
from settings import Settings
from ship import Ship
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
        # 监听：退出游戏
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
        screen.fill(settings.bg_color)
        # 绘制飞船
        ship.blitme()
        # 让最近绘制的屏幕可见
        pygame.display.flip()

run_game()

