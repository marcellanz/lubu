#ifndef	Copyright_HEADER
#define	Copyright_HEADER

/*
 * Copyright_ui.h - User interface object and function declarations.
 * This file was generated by `gxv' from `Copyright.G'.
 * DO NOT EDIT BY HAND.
 */

extern Attr_attribute	INSTANCE;


typedef struct {
	Xv_opaque	popup1;
	Xv_opaque	textpane1;
} Copyright_popup1_objects;

extern Copyright_popup1_objects	*Copyright_popup1_objects_initialize(Copyright_popup1_objects *, Xv_opaque);

extern Xv_opaque	Copyright_popup1_popup1_create(Copyright_popup1_objects *, Xv_opaque);
extern Xv_opaque	Copyright_popup1_textpane1_create(Copyright_popup1_objects *, Xv_opaque);
#endif
