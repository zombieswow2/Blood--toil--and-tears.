#include <SDL.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <string>

int main( int argc, char* args[] )
{
    SDL_Init(SDL_INIT_EVERYTHING);
    TTF_Init();

    SDL_Window* window = NULL;
    SDL_Window* SubWindow = NULL;
    SDL_Renderer* MainRenderer = NULL;
    SDL_Texture* loadTexture(SDL_Renderer* MainRenderer, std::string path);

    int SCREEN_WIDTH = 1920;
    int SCREEN_HEIGHT = 1080;

    window = SDL_CreateWindow( "Blood, toil, and tears.", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( window == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        };

    //Renderer
    MainRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    //Renderer

    //Textures
    SDL_Texture* MainMenuBG = NULL;
    SDL_Texture* StartdateOne = NULL;
    SDL_Texture* Unitedkingdom = NULL;
    SDL_Texture* Ocean = NULL;
    SDL_Texture* IreLand = NULL;
    //Textures

    //Font
    TTF_Font* font = nullptr;
    //30 is the font size
    font = TTF_OpenFont("CuteFont-Regular.ttf", 30);

    //r, g, b, a
    SDL_Color Grey{211, 211, 211, 0};
    SDL_Surface* surface = nullptr;
    SDL_Surface* surface2 = nullptr;
    SDL_Surface* surface3 = nullptr;
    SDL_Surface* surface4 = nullptr;
    SDL_Surface* surface5 = nullptr;
    SDL_Surface* surface6 = nullptr;
    SDL_Surface* surface7 = nullptr;
    SDL_Surface* surface8 = nullptr;
    SDL_Surface* surface9 = nullptr;
    SDL_Surface* surface10 = nullptr;
    SDL_Surface* surface11 = nullptr;
    SDL_Surface* surface12 = nullptr;
    SDL_Surface* surface13 = nullptr;
    SDL_Surface* surface14 = nullptr;
    surface = TTF_RenderText_Solid(font, "Options Menu", Grey);
    surface2 = TTF_RenderText_Solid(font, "Quit game", Grey);
    surface3 = TTF_RenderText_Solid(font, "Resolution", Grey);
    surface4 = TTF_RenderText_Solid(font, "800 by 600", Grey);
    surface5 = TTF_RenderText_Solid(font, "1024 by 768", Grey);
    surface6 = TTF_RenderText_Solid(font, "1280 by 720", Grey);
    surface7 = TTF_RenderText_Solid(font, "Return to main menu.", Grey);
    surface8 = TTF_RenderText_Solid(font, "New Game", Grey);
    surface9 = TTF_RenderText_Solid(font, "Blood, toil, and tears.", Grey);
    surface10 = TTF_RenderText_Solid(font, "War in Europe!", Grey);
    surface11 = TTF_RenderText_Solid(font, "Back", Grey);
    surface12 = TTF_RenderText_Solid(font, "January 1st, 1936.", Grey);
    surface13 = TTF_RenderText_Solid(font, "Hitler has taken full control of Germany and formed the third German Reich...", Grey);
    surface14 = TTF_RenderText_Solid(font, "Mussolini has taken full power of Italy and is embarking on big expansions of Italy's colonial empire!", Grey);


    SDL_Texture* OptionstextTexture = SDL_CreateTextureFromSurface(MainRenderer, surface);
    SDL_Texture* ExitTextTexture = SDL_CreateTextureFromSurface(MainRenderer, surface2);
    SDL_Texture* ResolutionTextTexture = SDL_CreateTextureFromSurface(MainRenderer, surface3);
    SDL_Texture* ResTextureEightBySix = SDL_CreateTextureFromSurface(MainRenderer, surface4);
    SDL_Texture* ResTextureOneBySeven = SDL_CreateTextureFromSurface(MainRenderer, surface5);
    SDL_Texture* ResTexture12by7 = SDL_CreateTextureFromSurface(MainRenderer, surface6);
    SDL_Texture* BackButtonTexture = SDL_CreateTextureFromSurface(MainRenderer, surface7);
    SDL_Texture* NewGameTexture = SDL_CreateTextureFromSurface(MainRenderer, surface8);
    SDL_Texture* TitleTexture = SDL_CreateTextureFromSurface(MainRenderer, surface9);
    SDL_Texture* SubTitleTexture = SDL_CreateTextureFromSurface(MainRenderer, surface10);
    SDL_Texture* BackButtontwo = SDL_CreateTextureFromSurface(MainRenderer, surface11);
    SDL_Texture* StartdateText = SDL_CreateTextureFromSurface(MainRenderer, surface12);
    SDL_Texture* StartdateExpl = SDL_CreateTextureFromSurface(MainRenderer, surface13);
    SDL_Texture* StartdateExp2 = SDL_CreateTextureFromSurface(MainRenderer, surface14);
    SDL_FreeSurface(surface);
    SDL_FreeSurface(surface2);
    SDL_FreeSurface(surface3);
    SDL_FreeSurface(surface4);
    SDL_FreeSurface(surface5);
    SDL_FreeSurface(surface6);
    SDL_FreeSurface(surface7);
    SDL_FreeSurface(surface8);
    SDL_FreeSurface(surface9);
    SDL_FreeSurface(surface10);
    SDL_FreeSurface(surface11);
    SDL_FreeSurface(surface12);
    SDL_FreeSurface(surface13);
    SDL_FreeSurface(surface14);

    SDL_Rect OptionstextRect{30, 400, 50, 50};
    SDL_Rect ExitTextRect{30, 450, 30, 30};
    SDL_Rect ResRect{4000, 2000, 50, 50};
    SDL_Rect EightbySix{4000, 2000, 50, 50};
    SDL_Rect OnebySeven{4000, 2000, 50, 50};
    SDL_Rect twelveByseven{4000, 2000, 50, 50};
    SDL_Rect BackButtonRect{4000, 2000, 50, 50};
    SDL_Rect NewGameRect{30, 350, 50, 50};
    SDL_Rect TitleRect{30, 50, 100, 100};
    SDL_Rect SubTitleRect{30, 100, 100, 100};
    SDL_Rect BackButtontwoRect{300000, 980000, 100, 100};
    SDL_Rect StartDate1936Rect{300000, 300000, 100, 100};
    SDL_Rect StartdateExplRect{300000, 300000, 300, 100};
    SDL_Rect StartdateExp2Rect{300000, 300000, 300, 100};
    //This function is used to get the width and height of rendered text
    TTF_SizeText(font, "Options menu", &OptionstextRect.w, &OptionstextRect.h);
    TTF_SizeText(font, "Quit Game", &ExitTextRect.w, &ExitTextRect.h);
    TTF_SizeText(font, "Resolution", &ResRect.w, &ResRect.h);
    TTF_SizeText(font, "Hello World!", &EightbySix.w, &EightbySix.h);
    TTF_SizeText(font, "Hello World!", &OnebySeven.w, &OnebySeven.h);
    TTF_SizeText(font, "Hello World!", &twelveByseven.w, &twelveByseven.h);
    TTF_SizeText(font, "Return to main menu", &BackButtonRect.w, &BackButtonRect.h);
    TTF_SizeText(font, "New Game", &NewGameRect.w, &NewGameRect.h);
    TTF_SizeText(font, "Blood, toil, and tears.", &TitleRect.w, &TitleRect.h);
    TTF_SizeText(font, "War in Europe!", &SubTitleRect.w, &SubTitleRect.h);
    TTF_SizeText(font, "Back", &BackButtontwoRect.w, &BackButtontwoRect.h);
    TTF_SizeText(font, "January 1st, 1936", &StartDate1936Rect.w, &StartDate1936Rect.h);
    TTF_SizeText(font, "Hitler has taken full control of Germany and formed the third German Reich...", &StartdateExplRect.w, &StartdateExplRect.h);
    TTF_SizeText(font, "Mussolini has taken full power of Italy and is embarking on daring expansions of Italy's colonial empire!", &StartdateExp2Rect.w, &StartdateExp2Rect.h);

    MainMenuBG = loadTexture(MainRenderer, "MainMenu.bmp");
    StartdateOne = loadTexture(MainRenderer, "StartDateBox.bmp");
    Unitedkingdom = loadTexture(MainRenderer, "UK.bmp");
    Ocean = loadTexture(MainRenderer, "Ocean.bmp");
    IreLand = loadTexture(MainRenderer, "Ireland.bmp");
    SDL_Rect MainMenuBGrect{0, 0, 1920, 1080};
    SDL_Rect StartdateoneRect{200000, 400000, 300, 500};
    SDL_Rect UKMain{100000, 100000, 800, 650};
    SDL_Rect OCEANRECT{100000, 100000, 1920, 1080};
    SDL_Rect IRErect{100000, 100000, 425, 500};

    SDL_Event ev;
    bool isRunning = true;
    while(isRunning)
    {
        while(SDL_PollEvent(&ev))
        {
            switch( ev.type )
            {
            case SDL_QUIT:
                isRunning = false;
                break;
            }
        }
            if (MainRenderer != nullptr)
                {
                    SDL_RenderClear(MainRenderer);
                    SDL_RenderCopy(MainRenderer, MainMenuBG, NULL, &MainMenuBGrect);
                    SDL_RenderCopy(MainRenderer, StartdateOne, NULL, &StartdateoneRect);
                    SDL_RenderCopy(MainRenderer, OptionstextTexture, NULL, &OptionstextRect);
                    SDL_RenderCopy(MainRenderer, ExitTextTexture, NULL, &ExitTextRect);
                    SDL_RenderCopy(MainRenderer, ResolutionTextTexture, NULL, &ResRect);
                    SDL_RenderCopy(MainRenderer, ResTextureEightBySix, NULL, &EightbySix);
                    SDL_RenderCopy(MainRenderer, ResTextureOneBySeven, NULL, &OnebySeven);
                    SDL_RenderCopy(MainRenderer, ResTexture12by7, NULL, &twelveByseven);
                    SDL_RenderCopy(MainRenderer, BackButtonTexture, NULL, &BackButtonRect);
                    SDL_RenderCopy(MainRenderer, NewGameTexture, NULL, &NewGameRect);
                    SDL_RenderCopy(MainRenderer, TitleTexture, NULL, &TitleRect);
                    SDL_RenderCopy(MainRenderer, SubTitleTexture, NULL, &SubTitleRect);
                    SDL_RenderCopy(MainRenderer, BackButtontwo, NULL, &BackButtontwoRect);
                    SDL_RenderCopy(MainRenderer, StartdateText, NULL, &StartDate1936Rect);
                    SDL_RenderCopy(MainRenderer, StartdateExpl, NULL, &StartdateExplRect);
                    SDL_RenderCopy(MainRenderer, StartdateExp2, NULL, &StartdateExp2Rect);
                    SDL_RenderCopy(MainRenderer, Ocean, NULL, &OCEANRECT);
                    SDL_RenderCopy(MainRenderer, Unitedkingdom, NULL, &UKMain);
                    SDL_RenderCopy(MainRenderer, IreLand, NULL, &IRErect);
                    SDL_RenderPresent(MainRenderer);
                }
            //Get mouse position
            int mouse_x, mouse_y;
            SDL_GetMouseState( &mouse_x, &mouse_y );
             if( ( mouse_x > ExitTextRect.x ) && ( mouse_x < ExitTextRect.x + ExitTextRect.w ) && ( mouse_y > ExitTextRect.y ) && ( mouse_y < ExitTextRect.y + ExitTextRect.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            isRunning = false;
                        }
                    }
            if( ( mouse_x > OptionstextRect.x ) && ( mouse_x < OptionstextRect.x + OptionstextRect.w ) && ( mouse_y > OptionstextRect.y ) && ( mouse_y < OptionstextRect.y + OptionstextRect.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            ExitTextRect.x = 30;
                            ExitTextRect.y = 650;
                            OptionstextRect.x = 10000000;
                            OptionstextRect.y = 10000000;
                            ResRect.x = 400;
                            ResRect.y = 200;
                            EightbySix.x = 425;
                            EightbySix.y = 250;
                            OnebySeven.x = 425;
                            OnebySeven.y = 300;
                            twelveByseven.x = 425;
                            twelveByseven.y = 350;
                            BackButtonRect.x = 30;
                            BackButtonRect.y = 600;
                            NewGameRect.x = 4000;
                            NewGameRect.y = 4000;
                        }
                    }
             if( ( mouse_x > EightbySix.x ) && ( mouse_x < EightbySix.x + EightbySix.w ) && ( mouse_y > EightbySix.y ) && ( mouse_y < EightbySix.y + EightbySix.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            SDL_SetWindowSize(window, 800, 600);
                            ExitTextRect.x = 30;
                            ExitTextRect.y = 450;
                            BackButtonRect.y = 400;
                        }
                    }
            if( ( mouse_x > OnebySeven.x ) && ( mouse_x < OnebySeven.x + OnebySeven.w ) && ( mouse_y > OnebySeven.y ) && ( mouse_y < OnebySeven.y + OnebySeven.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            SDL_SetWindowSize(window, 1024, 768);
                            ExitTextRect.x = 30;
                            ExitTextRect.y = 600;
                            BackButtonRect.y = 550;
                        }
                    }
            if( ( mouse_x > twelveByseven.x ) && ( mouse_x < twelveByseven.x + twelveByseven.w ) && ( mouse_y > twelveByseven.y ) && ( mouse_y < twelveByseven.y + twelveByseven.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            SDL_SetWindowSize(window, 1280, 720);
                            ExitTextRect.x = 30;
                            ExitTextRect.y = 600;
                            BackButtonRect.y = 550;
                        }
                    }
            if( ( mouse_x > BackButtonRect.x ) && ( mouse_x < BackButtonRect.x + BackButtonRect.w ) && ( mouse_y > BackButtonRect.y ) && ( mouse_y < BackButtonRect.y + BackButtonRect.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            ExitTextRect.x = 30;
                            ExitTextRect.y = 450;
                            OptionstextRect.x = 30;
                            OptionstextRect.y = 400;
                            ResRect.x = 4000000;
                            ResRect.y = 2000000;
                            EightbySix.x = 4250000;
                            EightbySix.y = 2500000;
                            OnebySeven.x = 425000;
                            OnebySeven.y = 300000;
                            twelveByseven.x = 10000;
                            twelveByseven.y = 10000;
                            BackButtonRect.x = 10000;
                            BackButtonRect.y = 10000;
                            NewGameRect.x = 30;
                            NewGameRect.y = 350;
                        }
                    }
            if( ( mouse_x > NewGameRect.x ) && ( mouse_x < NewGameRect.x + NewGameRect.w ) && ( mouse_y > NewGameRect.y ) && ( mouse_y < NewGameRect.y + NewGameRect.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            OptionstextRect.x = 300000;
                            OptionstextRect.y = 400000;
                            ExitTextRect.x = 300000;
                            ExitTextRect.y = 450000;
                            NewGameRect.x = 300000;
                            NewGameRect.y = 350000;
                            BackButtontwoRect.x = 30;
                            BackButtontwoRect.y = 980;
                            StartdateoneRect.x = 800;
                            StartdateoneRect.y = 40000;
                            StartDate1936Rect.x = 600;
                            StartDate1936Rect.y = 300;
                            StartdateExplRect.x = 400;
                            StartdateExplRect.y = 400;
                            StartdateExp2Rect.x = 400;
                            StartdateExp2Rect.y = 450;
                        }
                    }
             if( ( mouse_x > BackButtontwoRect.x ) && ( mouse_x < BackButtontwoRect.x + BackButtontwoRect.w ) && ( mouse_y > BackButtontwoRect.y ) && ( mouse_y < BackButtontwoRect.y + BackButtontwoRect.h ) )
                            {
                                if(ev.type == SDL_MOUSEBUTTONDOWN)
                                {
                                    OptionstextRect.x = 30;
                                    OptionstextRect.y = 400;
                                    ExitTextRect.x = 30;
                                    ExitTextRect.y = 450;
                                    NewGameRect.x = 30;
                                    NewGameRect.y = 350;
                                    BackButtontwoRect.x = 300000;
                                    BackButtontwoRect.y = 980000;
                                    StartdateoneRect.x = 800000;
                                    StartdateoneRect.y = 400000;
                                    StartDate1936Rect.x = 400000;
                                    StartDate1936Rect.y = 400000;
                                    StartdateExplRect.x = 500000;
                                    StartdateExplRect.y = 500000;
                                    StartdateExp2Rect.x = 500000;
                                    StartdateExp2Rect.y = 500000;
                                }
                            }
                    if( ( mouse_x > StartDate1936Rect.x ) && ( mouse_x < StartDate1936Rect.x + StartDate1936Rect.w ) && ( mouse_y > StartDate1936Rect.y ) && ( mouse_y < StartDate1936Rect.y + StartDate1936Rect.h ) )
                    {
                        if(ev.type == SDL_MOUSEBUTTONDOWN)
                        {
                            StartdateExplRect.x = 500000;
                            StartdateExplRect.y = 500000;
                            StartdateExp2Rect.x = 500000;
                            StartdateExp2Rect.y = 500000;
                            BackButtontwoRect.x = 300000;
                            BackButtontwoRect.x = 300000;
                            BackButtontwoRect.y = 980000;
                            StartdateoneRect.x = 800000;
                            StartdateoneRect.y = 400000;
                            StartDate1936Rect.x = 400000;
                            StartDate1936Rect.y = 400000;
                            MainMenuBGrect.x = 400000;
                            MainMenuBGrect.y = 400000;
                            UKMain.x = 800;
                            UKMain.y = 300;
                            OCEANRECT.x = 0;
                            OCEANRECT.y = 0;
                            IRErect.x = 700;
                            IRErect.y = 400;
                        }
                    }
    }
    SDL_DestroyRenderer(MainRenderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
    return 0;
};

SDL_Texture* loadTexture(SDL_Renderer* MainRenderer, std::string path)
{
    SDL_Surface* screenSurface = SDL_LoadBMP(path.c_str());
    if(screenSurface == nullptr)
    {
        printf("OOF");
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface(MainRenderer, screenSurface);
    SDL_FreeSurface(screenSurface);

    return texture;
}
