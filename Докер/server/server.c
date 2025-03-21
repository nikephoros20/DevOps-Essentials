#include <fcgiapp.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    FCGX_Init();
    FCGX_Request request;

    if (FCGX_InitRequest(&request, 0, FCGI_FAIL_ACCEPT_ON_INTR) != 0) {
        return 1;
    }

    while (FCGX_Accept_r(&request) == 0) {
        FCGX_FPrintF(request.out, "Content-type: text/htmlrn");
        FCGX_FPrintF(request.out, "rn<h1><center>Hello World!</center></h1>n");
        FCGX_Finish_r(&request);
    }

    return 0; 
}
