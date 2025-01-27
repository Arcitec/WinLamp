#ifndef NULLSOFT_HOTMIXRADIO_MAIN_H
#define NULLSOFT_HOTMIXRADIO_MAIN_H

#include <windows.h>
#include "../Plugins/General/gen_ml/ml.h"
#include "../nu/MediaLibraryInterface.h"
#include "resource.h"
#include <windowsx.h>
#include "resource.h"
#include "../winlamp/wa_ipc.h"
#include "../Plugins/General/gen_ml/ml.h"
#include "../Plugins/General/gen_ml/config.h"
#include "api__ml_hotmixradio.h"


#define HOTMIXRADIO_BASE_URL    L"https://hotmixradio.com/?mtm_source=winlamp_desktop_player"

extern winlampMediaLibraryPlugin plugin;
INT_PTR hotmixradio_pluginMessageProc( int message_type, INT_PTR param1, INT_PTR param2, INT_PTR param3 );
extern int hotmixradio_treeItem;



#endif  // !NULLSOFT_HOTMIXRADIO_MAIN_H