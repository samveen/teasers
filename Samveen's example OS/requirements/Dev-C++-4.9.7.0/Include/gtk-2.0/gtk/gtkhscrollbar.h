/* GTK - The GIMP Toolkit
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/*
 * Modified by the GTK+ Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GTK+ Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GTK+ at ftp://ftp.gtk.org/pub/gtk/. 
 */

#ifndef __GTK_HSCROLLBAR_H__
#define __GTK_HSCROLLBAR_H__


#include <gdk/gdk.h>
#include <gtk/gtkscrollbar.h>


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define GTK_TYPE_HSCROLLBAR            (gtk_hscrollbar_get_type ())
#define GTK_HSCROLLBAR(obj)            (GTK_CHECK_CAST ((obj), GTK_TYPE_HSCROLLBAR, GtkHScrollbar))
#define GTK_HSCROLLBAR_CLASS(klass)    (GTK_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSCROLLBAR, GtkHScrollbarClass))
#define GTK_IS_HSCROLLBAR(obj)         (GTK_CHECK_TYPE ((obj), GTK_TYPE_HSCROLLBAR))
#define GTK_IS_HSCROLLBAR_CLASS(klass) (GTK_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSCROLLBAR))
#define GTK_HSCROLLBAR_GET_CLASS(obj)  (GTK_CHECK_GET_CLASS ((obj), GTK_TYPE_HSCROLLBAR, GtkHScrollbarClass))


typedef struct _GtkHScrollbar       GtkHScrollbar;
typedef struct _GtkHScrollbarClass  GtkHScrollbarClass;

struct _GtkHScrollbar
{
  GtkScrollbar scrollbar;
};

struct _GtkHScrollbarClass
{
  GtkScrollbarClass parent_class;
};


GtkType    gtk_hscrollbar_get_type (void) G_GNUC_CONST;
GtkWidget* gtk_hscrollbar_new      (GtkAdjustment *adjustment);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __GTK_HSCROLLBAR_H__ */