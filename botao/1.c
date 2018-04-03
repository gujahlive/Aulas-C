#include <windows.h>
#include <stdio.h>
enum { ID_LABEL = 1,I,ID_BUTTON0,ID_BUTTON1};
LRESULT CALLBACK WinProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam); 

HINSTANCE g_hInst;
TCHAR	szAppName[]	= TEXT("Spy DAVIFN");
TCHAR	szWinClass[]	= TEXT("WIN_CLASS");

HWND static_label;
HWND edit;
HWND list; 
HWND button0; 
HWND button1; 

int  WINAPI WinMain(HINSTANCE hInstance, 
		HINSTANCE hPrevInstance,
		PSTR lpCmdLine,
		int nCmdShow){

	MSG			msg; 
	WNDCLASS	wc;	
	HWND		hwnd; 
	g_hInst = hInstance;

	wc.cbClsExtra		= 0; 
	wc.cbWndExtra		= 0; 
	wc.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1); 
	wc.hCursor			= LoadCursor(NULL, IDC_ARROW); 
	wc.hIcon			= LoadIcon(NULL, IDI_APPLICATION); 
	wc.hInstance		= hInstance; 
	wc.lpfnWndProc		= WinProc; 
	wc.lpszClassName	= szWinClass; 
	wc.lpszMenuName		= NULL; 
	wc.style			= CS_HREDRAW | CS_VREDRAW; 

 	if( !RegisterClass(&wc)) 
	{
		MessageBox(NULL, TEXT("Error registering class"), TEXT("ERROR"), MB_OK);
		return 0;
	}
	hwnd = CreateWindow(szWinClass,
						szAppName, 
						WS_OVERLAPPEDWINDOW, 
						CW_USEDEFAULT, 
						CW_USEDEFAULT, 
						600, 
						500, 
						(HWND) NULL, 
						(HMENU) NULL, 
						(HINSTANCE) hInstance, 
						(void *) NULL); 

	ShowWindow(hwnd, nCmdShow); 
	UpdateWindow(hwnd);	

	while (GetMessage(&msg, (HWND) NULL, 0, 0))
	{
		TranslateMessage(&msg); 
		DispatchMessage(&msg); 
	}
	return msg.wParam; 
}

LRESULT CALLBACK WinProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam){
	PAINTSTRUCT	ps;
	HDC			hdc;

	switch(msg){
		case WM_CREATE:
			static_label = CreateWindow("Static","\n\n                                                TEXTO.. ETC BY DAVIFN",WS_CHILD | WS_VISIBLE,0,0,600,85,hwnd,0,g_hInst,0);	

			button0 = CreateWindow("Button","Botão número 1",BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,65,300,455,100,hwnd,(HMENU)ID_BUTTON0,g_hInst,0);	
			button1 = CreateWindow("Button","Botão número 2",BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,65,150,455,100,hwnd,(HMENU)ID_BUTTON1,g_hInst,0);	
		case WM_PAINT: 
			hdc = BeginPaint(hwnd, &ps);
			EndPaint(hwnd, &ps);
			return 0;
		case WM_COMMAND:
            switch(wParam)
            {
                case ID_BUTTON0:
					{
						FUNÇÔES CASO BOTÂO UM SEJA APERTADO
break;
						case ID_BUTTON1:
					{
		FUNÇÔES CASO BOTÂO DOIS SEJA APERTADO
                 }
                        }
                    }
						break;
					}
            } 
			break;
		case WM_DESTROY: 
			PostQuitMessage(0);
          		break;
		case WM_CLOSE:
			DestroyWindow(hwnd);
			break;
	}return DefWindowProc(hwnd, msg, wParam, lParam);
    }
