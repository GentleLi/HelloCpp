//
// Created by Administrator on 2021/3/17.
//
#include <cstdio>

#ifndef HELLOCPP_FILE_H
#define HELLOCPP_FILE_H

void readFile(char *path);

#endif //HELLOCPP_FILE_H


void readFile(char *path) {
    FILE *fp = NULL;
    fp = fopen(path, "w+");
    fprintf(fp, "this is testing for fprintf() ");
    fputs("this is testing for fputs()", fp);
    fclose(fp);
}
