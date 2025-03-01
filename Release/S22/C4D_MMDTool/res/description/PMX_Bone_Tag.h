#ifndef _PMX_BONE_TAG_H_
#define _PMX_BONE_TAG_H_
enum 
{
	PMX_BONE_INFO_GRP = 1000,
	BONE_INDEX,
	BONE_NAME_LOCAL,//骨骼本地名称
	BONE_NAME_UNIVERSAL,//骨骼通用名称
	BONE_NAME_IS,//骨骼显示名称	


	POSITION,//位置

	PMX_BONE_PARENT_BONE_GRP,//亲骨组
	PARENT_BONE_INDEX,//亲骨索引
	PARENT_BONE_LINK,//亲骨

	PMX_BONE_FLAG_GRP,//骨骼特征组
	ROTATABLE,//启用旋转
	TRANSLATABLE,//启用移动
	VISIBLE,//启用显示
	ENABLED,//启用操作
	IS_IK,//启用IK骨

	PMX_BONE_DEFORM_LAYER_GRP,//变形阶层组
	LAYER,//变形阶层
	PHYSICS_AFTER_DEFORM,//先变形，后算物理

	PMX_BONE_END_OF_BONE_GRP,//骨骼末端
	INDEXED_TAIL_POSITION,//骨骼尾部(尖端)位置

	TAIL_INDEX,//子骨骼索引
	TAIL_POSITION,//相对位置

	PMX_BONE_INHERIT_GRP,//骨骼继承组
	INHERIT_ROTATION,//启用继承亲骨的旋转
	INHERIT_TRANSLATION,//启用继承亲骨的移动
	INHERIT_BONE_PARENT_INDEX,//骨骼继承-亲骨索引
	INHERIT_BONE_PARENT_INFLUENCE,//骨骼继承-影响权重
	INHERIT_BONE_PARENT_LINK,//骨骼继承-亲骨

	PMX_BONE_FIXED_AXIS_GRP,//轴限制
	FIXED_AXIS,//启用轴限制
	BONE_FIXED_AXIS,//骨骼固定轴-轴方向

	PMX_BONE_LOCAL_COORDINATE_GRP,//Local轴
	LOCAL_COORDINATE,//启用Local轴
	BONE_LOCAL_X,//骨骼Local坐标-X矢量
	BONE_LOCAL_Z,//骨骼Local坐标-Z矢量

	NAME_IS_LOCAL = 0,//骨骼使用本地名称
	NAME_IS_UNIVERSAL = 1,//骨骼使用通用名称

	TAIL_IS_INDEX = 0,//是连接子骨骼
	TAIL_IS_POSITION = 1,//是连接相对位置

};
#endif _PMX_BONE_TAG_H_
