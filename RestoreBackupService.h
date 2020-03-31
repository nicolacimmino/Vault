#ifndef __VAULT_RESTORE_BACKUP_SERVICE_H__
#define __VAULT_RESTORE_BACKUP_SERVICE_H__

#include "Service.h"
#include "Terminal.h"
#include <Keyboard.h>
#include "hardware.h"
#include <EEPROM.h>

#define BAKCUP_ADDRESSES_PER_LINE 16
#define BACKUP_LINES_PER_LOOP 4
#define FLOW_CONTROL_XON 0x11
#define FLOW_CONTROL_XOFF 0x13

class RestoreBackupService : public Service
{
private:
    uint16_t backupRestoreAddress;    
    Terminal *terminal;
    bool backupRestoreStarted = false;

public:
    RestoreBackupService(Terminal *terminal, const Functor1<byte> &reportProgress, const Functor0 &reportCompletion);
    bool start();
    void loop();
};

#endif