//
//  UtPod.cpp
//  
//
//  Created by David Fernandez on 10/28/18.
//

#include <stdio.h>
#include "UtPod.h"

using namespace std;

    UtPod::UtPod(){
        memSize = MAX_MEMORY;
    }

    UtPod:: UtPod(int size){
        if(size>MAX_MEMORY || size<=0){
            memSize = MAX_MEMORY;
        }else{
            memSize = size;
        }
    }

    int 
