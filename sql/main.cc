/* Copyright (c) 2009 Sun Microsystems, Inc.
   Use is subject to license terms.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   51 Franklin Street, Suite 500, Boston, MA 02110-1335 USA */

/* 
  main() for mysqld.
  Calls mysqld_main() entry point exported by sql library.
*/
extern int mysqld_main(int argc, char **argv);
//wxc 2016-11-22:22:58:07 这个是整个MySQL的Main的总入口了？
int main(int argc, char **argv)
{
  return mysqld_main(argc, argv);;//wxc 2016-11-22:23:15:31 这个mysql_main方法在哪定义？
}
