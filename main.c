#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define WEBVIEW_HEADER
#include "webview.h"

const char index[] = "file:///home/rick/.rick/index.html";

#ifdef WIN32
int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,
                   int nCmdShow) {
#else
int main() {
#endif
	webview_t w = webview_create(0, NULL);
	webview_set_title(w, "AstleyOS");
	webview_set_size(w, 480, 320, WEBVIEW_HINT_NONE);
	webview_navigate(w, index);
	webview_run(w);
	webview_destroy(w);
	return 0;
}
