﻿#ifndef __MMD_PMX_TAG_H__
#define __MMD_PMX_TAG_H__

#include "main.h"
#include "c4d_nodedata.h"
#include "description/PMX_Model_Tag.h"
#include "description/PMX_Bone_Tag.h"

#define MSG_PMX_BONE_ORDER_CHANGES 1056720

namespace mmd {

	

	class PMX_Model_Tag : public TagData
	{
		
	public:
		Bool Init(GeListNode* node);
		Bool Message(GeListNode* node, Int32 type, void* data);
		Bool GetDDescription(GeListNode* node, Description* description, DESCFLAGS_DESC& flags);
		static Bool UpDataBoneList(BaseTag* tag, BaseObject* obj);
		static NodeData* Alloc() { return NewObjClear(PMX_Model_Tag); }
	};

	class PMX_Bone_Tag : public TagData
	{
	public:
		Bool Init(GeListNode* node);
		Bool GetDEnabling(GeListNode *node, const DescID &id, const GeData &t_data, DESCFLAGS_ENABLE flags, const BaseContainer *itemdesc);
		Bool Message(GeListNode* node, Int32 type, void* data);
		static Bool tagUpData(BaseTag* tag, BaseObject* obj);
		static NodeData* Alloc() { return NewObjClear(PMX_Bone_Tag); }
	};

	/*	
	class PMX_Material_Tag : public TagData
	{
	public:
		virtual Bool Init(GeListNode* node);

		virtual EXECUTIONRESULT Execute(BaseTag* tag, BaseDocument* doc, BaseObject* op, BaseThread* bt, Int32 priority, EXECUTIONFLAGS flags);
		virtual Bool GetDDescription(GeListNode* node, Description* description, DESCFLAGS_DESC& flags);

		static NodeData* Alloc() { return NewObjClear(PMX_Material_Tag); }
	};
	class PMX_Display_Tag : public TagData
	{
	public:
		virtual Bool Init(GeListNode* node);

		virtual EXECUTIONRESULT Execute(BaseTag* tag, BaseDocument* doc, BaseObject* op, BaseThread* bt, Int32 priority, EXECUTIONFLAGS flags);
		virtual Bool GetDDescription(GeListNode* node, Description* description, DESCFLAGS_DESC& flags);

		static NodeData* Alloc() { return NewObjClear(PMX_Display_Tag); }
	};
	class PMX_Rigid_Tag : public TagData
	{
	public:
		virtual Bool Init(GeListNode* node);

		virtual EXECUTIONRESULT Execute(BaseTag* tag, BaseDocument* doc, BaseObject* op, BaseThread* bt, Int32 priority, EXECUTIONFLAGS flags);
		virtual Bool GetDDescription(GeListNode* node, Description* description, DESCFLAGS_DESC& flags);

		static NodeData* Alloc() { return NewObjClear(PMX_Rigid_Tag); }
	};

	class PMX_Joint_Tag : public TagData
	{
	public:
		virtual Bool Init(GeListNode* node);

		virtual EXECUTIONRESULT Execute(BaseTag* tag, BaseDocument* doc, BaseObject* op, BaseThread* bt, Int32 priority, EXECUTIONFLAGS flags);
		virtual Bool GetDDescription(GeListNode* node, Description* description, DESCFLAGS_DESC& flags);

		static NodeData* Alloc() { return NewObjClear(PMX_Joint_Tag); }
	};*/
}

#endif __MMD_PMX_TAG_H__