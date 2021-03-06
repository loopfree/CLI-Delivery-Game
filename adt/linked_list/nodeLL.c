/* File: node.c */
/* Implementasi Node */

#include "nodeLL.h"
#include <stdlib.h>

AddressNODELL newNode(ElTypeNODELL val) {
    AddressNODELL p = (AddressNODELL) malloc(sizeof(NodeLL));
    if (p!=NULL) {
        PICKUPNODELL(p) = val.pickup;
        DROPOFFNODELL(p) = val.dropoff;
        ITEMTYPENODELL(p) = val.itemtype;
        TIMELIMITNODELL(p) = (&val.timelimit != NULL) ? val.timelimit : -2;
        TIMELIMITORIGINAL(p) = (&val.timelimit != NULL) ? val.timelimit : -2;
        NEXTNODELL(p) = NULL;
    }
    return p;
}