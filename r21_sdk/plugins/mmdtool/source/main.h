﻿#ifndef MAIN_H__
#define MAIN_H__

#define ID_PMX_MATERIAL_TAG 1056725
#define ID_PMX_BONE_TAG 1056720
#define ID_PMX_DISPLAY_TAG 	1056721
#define ID_PMX_RIGID_TAG 1056722
#define ID_PMX_JOINT_TAG 1056723
#define ID_PMX_MODEL_TAG 1056724
#define ID_MMD_TOOL 1056563

#include <memory>
#include "c4d.h"
#include "c4d_plugin.h"
#include "ge_prepass.h"
#include "c4d_symbols.h"
#include "maxon/sortedarray.h"
#include "maxon/pointerarray.h"
#include "maxon/queue.h"
#include "maxon/baselist.h"
#include "maxon/timevalue.h"
#include "operatingsystem.h"
#include "customgui_priority.h"
#include "lib_ca.h"
#include "tcaposemorph.h"
#include "xcolor.h"
#include "ocajoint.h"
#include "tcaik.h"
#include "tcaconstraint.h"
#include "tcaweight.h"
#include "lib_ca.h"
#include "lib_modeling.h"
#include "lib_ngon.h"
#include "c4d_baseobject.h"
#include "tprotection.h"
#include "NameConversion.h"
#include "undef_win_macros.h"
#include "EncodingConversion.h"

class MMDTool;
class MMDToolDialog;

Bool RegisterPMXModelTag();
Bool RegisterPMXBoneTag();
/*Bool RegisterPMXMaterialTag();
Bool RegisterPMXDisplayTag();
Bool RegisterPMXRigidTag();
Bool RegisterPMXJointTag();*/
Bool RegisterMMDTool();

#endif // MAIN_H__
