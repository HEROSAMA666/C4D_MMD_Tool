CONTAINER PMX_Bone_Tag
{
	NAME PMX_Bone_Tag;
	INCLUDE Tbase;
	
	GROUP PMX_BONE_INFO_GRP{
		DEFAULT 1;		
		STATICTEXT	   BONE_INDEX {ANIM OFF;}	
		STRING     BONE_NAME_LOCAL {ANIM OFF;}					
		STRING     BONE_NAME_UNIVERSAL {ANIM OFF;}	
		LONG	   BONE_NAME_IS{ANIM OFF;MIN 0;MAX 1;CYCLE{NAME_IS_LOCAL;NAME_IS_UNIVERSAL;}}			
		VECTOR     POSITION {ANIM OFF;}
		GROUP PMX_BONE_PARENT_BONE_GRP{
			DEFAULT 1;
			COLUMNS 2;

			LONG PARENT_BONE_INDEX {ANIM OFF;}
			LINK PARENT_BONE_LINK {ANIM OFF;}
		}
		GROUP PMX_BONE_FLAG_GRP{
			DEFAULT 1;
			COLUMNS 5;

			BOOL   ROTATABLE {ANIM OFF;}
			BOOL   TRANSLATABLE {ANIM OFF;}
			BOOL   VISIBLE {ANIM OFF;}
			BOOL   ENABLED {ANIM OFF;}
			BOOL   IS_IK {ANIM OFF;}
		}	
		GROUP PMX_BONE_DEFORM_LAYER_GRP{
			DEFAULT 1;
			COLUMNS 2;

			LONG LAYER {ANIM OFF;}
			BOOL PHYSICS_AFTER_DEFORM {ANIM OFF;}
		}
		GROUP PMX_BONE_END_OF_BONE_GRP{
			DEFAULT 1;
			LONG INDEXED_TAIL_POSITION{ANIM OFF;MIN 0;MAX 1;CYCLE{TAIL_IS_INDEX;TAIL_IS_POSITION;}}			
			LONG TAIL_INDEX{ANIM OFF;MIN -1;}			
			VECTOR TAIL_POSITION{ANIM OFF;}				
		}
		GROUP PMX_BONE_INHERIT_GRP{
			GROUP{
				COLUMNS 2;

				BOOL   INHERIT_ROTATION {ANIM OFF;}
				BOOL   INHERIT_TRANSLATION {ANIM OFF;}
			}									
			GROUP{
				COLUMNS 2;

				LONG INHERIT_BONE_PARENT_INDEX{ANIM OFF;MIN -1;}			
				LINK INHERIT_BONE_PARENT_LINK {ANIM OFF;}
			}		
			REAL INHERIT_BONE_PARENT_INFLUENCE{ANIM OFF;STEP 0.01;UNIT REAL;}								
		}
		GROUP PMX_BONE_FIXED_AXIS_GRP{
			BOOL   FIXED_AXIS {ANIM OFF;}			
			VECTOR BONE_FIXED_AXIS{ANIM OFF;}				
		}
		GROUP PMX_BONE_LOCAL_COORDINATE_GRP{
			BOOL   LOCAL_COORDINATE {ANIM OFF;}			
			VECTOR BONE_LOCAL_X{ANIM OFF;}		
			VECTOR BONE_LOCAL_Z{ANIM OFF;}			
		}
	}
}