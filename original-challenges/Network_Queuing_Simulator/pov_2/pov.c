#include <libpov.h>
int main(void) {
   negotiate_type1(0x0, 0x0, 0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** delimited read
      static unsigned char read_00000_delim[] = 
         "\x0a";
      read_00000 = NULL;
      read_00000_len = 0;
      int read_00000_res = delimited_read(0, &read_00000, &read_00000_len, read_00000_delim, 1);
      if (read_00000_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00000_00000[] = 
         "\x57\x65\x6c\x63\x6f\x6d\x65\x20\x74\x6f\x20\x74\x68\x65\x20\x6e"
         "\x65\x74\x77\x6f\x72\x6b\x20\x71\x75\x65\x75\x69\x6e\x67\x20\x73"
         "\x69\x6d\x75\x6c\x61\x74\x6f\x72\x0a";
      read_00000_ptr += data_match(read_00000 + read_00000_ptr, read_00000_len - read_00000_ptr, match_00000_00000, 41);
      free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00001;
      unsigned int read_00001_len;
      unsigned int read_00001_ptr = 0;
      //**** delimited read
      static unsigned char read_00001_delim[] = 
         "\x3a\x20";
      read_00001 = NULL;
      read_00001_len = 0;
      int read_00001_res = delimited_read(0, &read_00001, &read_00001_len, read_00001_delim, 2);
      if (read_00001_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00001_00000[] = 
         "\x57\x68\x61\x74\x27\x73\x20\x74\x68\x65\x20\x69\x6e\x74\x65\x72"
         "\x66\x61\x63\x65\x20\x73\x70\x65\x65\x64\x20\x28\x69\x6e\x20\x62"
         "\x70\x73\x20\x75\x70\x20\x74\x6f\x20\x34\x31\x39\x34\x33\x30\x34"
         "\x20\x62\x70\x73\x29\x3a\x20";
      read_00001_ptr += data_match(read_00001 + read_00001_ptr, read_00001_len - read_00001_ptr, match_00001_00000, 55);
      free(read_00001);
      if (read_00001_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\x34\x31\x39\x34\x33\x30\x34\x0a";
      static unsigned int write_00000_00000_len = 8;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         transmit_all(1, write_00000, write_00000_len);
      }
      free(write_00000);
   } while (0);
   do {
      unsigned char *read_00002;
      unsigned int read_00002_len;
      unsigned int read_00002_ptr = 0;
      //**** delimited read
      static unsigned char read_00002_delim[] = 
         "\x0a";
      read_00002 = NULL;
      read_00002_len = 0;
      int read_00002_res = delimited_read(0, &read_00002, &read_00002_len, read_00002_delim, 1);
      if (read_00002_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00002_00000[] = 
         "\x54\x68\x65\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x70\x61"
         "\x63\x6b\x65\x74\x20\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x73\x20"
         "\x61\x72\x65\x20\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3a\x0a";
      read_00002_ptr += data_match(read_00002 + read_00002_ptr, read_00002_len - read_00002_ptr, match_00002_00000, 47);
      free(read_00002);
      if (read_00002_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00003;
      unsigned int read_00003_len;
      unsigned int read_00003_ptr = 0;
      //**** delimited read
      static unsigned char read_00003_delim[] = 
         "\x0a";
      read_00003 = NULL;
      read_00003_len = 0;
      int read_00003_res = delimited_read(0, &read_00003, &read_00003_len, read_00003_delim, 1);
      if (read_00003_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00003_00000[] = 
         "\x20\x20\x31\x20\x2d\x20\x52\x61\x6e\x64\x6f\x6d\x0a";
      read_00003_ptr += data_match(read_00003 + read_00003_ptr, read_00003_len - read_00003_ptr, match_00003_00000, 13);
      free(read_00003);
      if (read_00003_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00004;
      unsigned int read_00004_len;
      unsigned int read_00004_ptr = 0;
      //**** delimited read
      static unsigned char read_00004_delim[] = 
         "\x0a";
      read_00004 = NULL;
      read_00004_len = 0;
      int read_00004_res = delimited_read(0, &read_00004, &read_00004_len, read_00004_delim, 1);
      if (read_00004_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00004_00000[] = 
         "\x20\x20\x32\x20\x2d\x20\x50\x6f\x69\x73\x73\x6f\x6e\x0a";
      read_00004_ptr += data_match(read_00004 + read_00004_ptr, read_00004_len - read_00004_ptr, match_00004_00000, 14);
      free(read_00004);
      if (read_00004_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00005;
      unsigned int read_00005_len;
      unsigned int read_00005_ptr = 0;
      //**** delimited read
      static unsigned char read_00005_delim[] = 
         "\x0a";
      read_00005 = NULL;
      read_00005_len = 0;
      int read_00005_res = delimited_read(0, &read_00005, &read_00005_len, read_00005_delim, 1);
      if (read_00005_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00005_00000[] = 
         "\x20\x20\x33\x20\x2d\x20\x4d\x61\x6e\x75\x61\x6c\x0a";
      read_00005_ptr += data_match(read_00005 + read_00005_ptr, read_00005_len - read_00005_ptr, match_00005_00000, 13);
      free(read_00005);
      if (read_00005_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00006;
      unsigned int read_00006_len;
      unsigned int read_00006_ptr = 0;
      //**** delimited read
      static unsigned char read_00006_delim[] = 
         "\x3a\x20";
      read_00006 = NULL;
      read_00006_len = 0;
      int read_00006_res = delimited_read(0, &read_00006, &read_00006_len, read_00006_delim, 2);
      if (read_00006_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00006_00000[] = 
         "\x57\x68\x69\x63\x68\x20\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x20"
         "\x77\x6f\x75\x6c\x64\x20\x79\x6f\x75\x20\x6c\x69\x6b\x65\x20\x74"
         "\x6f\x20\x75\x73\x65\x3f\x20\x28\x31\x2d\x33\x29\x3a\x20";
      read_00006_ptr += data_match(read_00006 + read_00006_ptr, read_00006_len - read_00006_ptr, match_00006_00000, 46);
      free(read_00006);
      if (read_00006_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00001_00000[] = 
         "\x33\x0a";
      static unsigned int write_00001_00000_len = 2;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);
      if (write_00001_len > 0) {
         transmit_all(1, write_00001, write_00001_len);
      }
      free(write_00001);
   } while (0);
   do {
      unsigned char *read_00007;
      unsigned int read_00007_len;
      unsigned int read_00007_ptr = 0;
      //**** delimited read
      static unsigned char read_00007_delim[] = 
         "\x3a\x20";
      read_00007 = NULL;
      read_00007_len = 0;
      int read_00007_res = delimited_read(0, &read_00007, &read_00007_len, read_00007_delim, 2);
      if (read_00007_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00007_00000[] = 
         "\x53\x68\x6f\x75\x6c\x64\x20\x74\x68\x65\x20\x70\x61\x63\x6b\x65"
         "\x74\x20\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x20\x72\x65\x70\x65"
         "\x61\x74\x20\x74\x68\x65\x20\x6d\x61\x6e\x75\x61\x6c\x6c\x79\x20"
         "\x65\x6e\x74\x65\x72\x65\x64\x20\x70\x61\x63\x6b\x65\x74\x73\x3f"
         "\x20\x28\x79\x2c\x6e\x29\x3a\x20";
      read_00007_ptr += data_match(read_00007 + read_00007_ptr, read_00007_len - read_00007_ptr, match_00007_00000, 72);
      free(read_00007);
      if (read_00007_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00002_00000[] = 
         "\x79\x0a";
      static unsigned int write_00002_00000_len = 2;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);
      if (write_00002_len > 0) {
         transmit_all(1, write_00002, write_00002_len);
      }
      free(write_00002);
   } while (0);
   do {
      unsigned char *read_00008;
      unsigned int read_00008_len;
      unsigned int read_00008_ptr = 0;
      //**** delimited read
      static unsigned char read_00008_delim[] = 
         "\x3a\x20";
      read_00008 = NULL;
      read_00008_len = 0;
      int read_00008_res = delimited_read(0, &read_00008, &read_00008_len, read_00008_delim, 2);
      if (read_00008_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00008_00000[] = 
         "\x48\x6f\x77\x20\x6d\x61\x6e\x79\x20\x70\x61\x63\x6b\x65\x74\x73"
         "\x20\x77\x6f\x75\x6c\x64\x20\x79\x6f\x75\x20\x6c\x69\x6b\x65\x20"
         "\x74\x6f\x20\x65\x6e\x74\x65\x72\x3f\x20\x28\x31\x20\x2d\x20\x31"
         "\x30\x30\x30\x29\x3a\x20";
      read_00008_ptr += data_match(read_00008 + read_00008_ptr, read_00008_len - read_00008_ptr, match_00008_00000, 54);
      free(read_00008);
      if (read_00008_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00003_00000[] = 
         "\x31\x0a";
      static unsigned int write_00003_00000_len = 2;
      unsigned char *write_00003 = NULL;
      unsigned int write_00003_len = 0;
      write_00003 = append_buf(write_00003, &write_00003_len, write_00003_00000, write_00003_00000_len);
      if (write_00003_len > 0) {
         transmit_all(1, write_00003, write_00003_len);
      }
      free(write_00003);
   } while (0);
   do {
      unsigned char *read_00009;
      unsigned int read_00009_len;
      unsigned int read_00009_ptr = 0;
      //**** delimited read
      static unsigned char read_00009_delim[] = 
         "\x0a";
      read_00009 = NULL;
      read_00009_len = 0;
      int read_00009_res = delimited_read(0, &read_00009, &read_00009_len, read_00009_delim, 1);
      if (read_00009_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00009_00000[] = 
         "\x45\x6e\x74\x65\x72\x20\x74\x68\x65\x20\x70\x61\x63\x6b\x65\x74"
         "\x73\x2c\x20\x6f\x6e\x65\x20\x70\x65\x72\x20\x6c\x69\x6e\x65\x20"
         "\x69\x6e\x20\x74\x68\x69\x73\x20\x66\x6f\x72\x6d\x61\x74\x3a\x0a";
      read_00009_ptr += data_match(read_00009 + read_00009_ptr, read_00009_len - read_00009_ptr, match_00009_00000, 48);
      free(read_00009);
      if (read_00009_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00010;
      unsigned int read_00010_len;
      unsigned int read_00010_ptr = 0;
      //**** delimited read
      static unsigned char read_00010_delim[] = 
         "\x0a";
      read_00010 = NULL;
      read_00010_len = 0;
      int read_00010_res = delimited_read(0, &read_00010, &read_00010_len, read_00010_delim, 1);
      if (read_00010_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00010_00000[] = 
         "\x74\x69\x6d\x65\x20\x73\x69\x6e\x63\x65\x20\x6c\x61\x73\x74\x20"
         "\x70\x61\x63\x6b\x65\x74\x20\x28\x73\x2c\x20\x23\x23\x2e\x23\x23"
         "\x23\x23\x23\x23\x29\x2c\x6c\x65\x6e\x67\x74\x68\x20\x28\x62\x79"
         "\x74\x65\x73\x20\x36\x34\x2d\x31\x35\x30\x30\x29\x2c\x70\x72\x69"
         "\x6f\x72\x69\x74\x79\x20\x28\x30\x2d\x36\x33\x29\x0a";
      read_00010_ptr += data_match(read_00010 + read_00010_ptr, read_00010_len - read_00010_ptr, match_00010_00000, 77);
      free(read_00010);
      if (read_00010_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00004_00000[] = 
         "\x30\x2e\x30\x30\x30\x31\x32\x32\x2c\x36\x34\x2c\x30\x0a";
      static unsigned int write_00004_00000_len = 14;
      unsigned char *write_00004 = NULL;
      unsigned int write_00004_len = 0;
      write_00004 = append_buf(write_00004, &write_00004_len, write_00004_00000, write_00004_00000_len);
      if (write_00004_len > 0) {
         transmit_all(1, write_00004, write_00004_len);
      }
      free(write_00004);
   } while (0);
   do {
      unsigned char *read_00011;
      unsigned int read_00011_len;
      unsigned int read_00011_ptr = 0;
      //**** delimited read
      static unsigned char read_00011_delim[] = 
         "\x3a\x20";
      read_00011 = NULL;
      read_00011_len = 0;
      int read_00011_res = delimited_read(0, &read_00011, &read_00011_len, read_00011_delim, 2);
      if (read_00011_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00011_00000[] = 
         "\x46\x6f\x72\x20\x68\x6f\x77\x20\x6c\x6f\x6e\x67\x20\x77\x6f\x75"
         "\x6c\x64\x20\x79\x6f\x75\x20\x6c\x69\x6b\x65\x20\x74\x68\x65\x20"
         "\x73\x69\x6d\x75\x6c\x61\x74\x69\x6f\x6e\x20\x74\x6f\x20\x72\x75"
         "\x6e\x3f\x20\x28\x31\x20\x2d\x20\x31\x30\x73\x29\x3a\x20";
      read_00011_ptr += data_match(read_00011 + read_00011_ptr, read_00011_len - read_00011_ptr, match_00011_00000, 62);
      free(read_00011);
      if (read_00011_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00005_00000[] = 
         "\x31\x30\x30\x30\x30\x0a";
      static unsigned int write_00005_00000_len = 6;
      unsigned char *write_00005 = NULL;
      unsigned int write_00005_len = 0;
      write_00005 = append_buf(write_00005, &write_00005_len, write_00005_00000, write_00005_00000_len);
      if (write_00005_len > 0) {
         transmit_all(1, write_00005, write_00005_len);
      }
      free(write_00005);
   } while (0);
   do {
      unsigned char *read_00012;
      unsigned int read_00012_len;
      unsigned int read_00012_ptr = 0;
      //**** delimited read
      static unsigned char read_00012_delim[] = 
         "\x3a\x20";
      read_00012 = NULL;
      read_00012_len = 0;
      int read_00012_res = delimited_read(0, &read_00012, &read_00012_len, read_00012_delim, 2);
      if (read_00012_res) {} //silence unused variable warning
      /* read match pcre:
.*How many queues \(1-8\)\?: 
*/
      static char read_00012_00000_regex[] = 
         "\x2e\x2a\x48\x6f\x77\x20\x6d\x61\x6e\x79\x20\x71\x75\x65\x75\x65"
         "\x73\x20\x5c\x28\x31\x2d\x38\x5c\x29\x5c\x3f\x3a\x20";
      static match_result read_00012_00000_match;
      pcre *read_00012_00000_pcre = init_regex(read_00012_00000_regex);
      if (read_00012_00000_pcre != NULL) {
         int rc = regex_match(read_00012_00000_pcre, 0, read_00012 + read_00012_ptr, read_00012_len - read_00012_ptr, &read_00012_00000_match);
         if (rc > 0) {
            read_00012_ptr += read_00012_00000_match.match_end - read_00012_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00012_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00012);
      if (read_00012_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00006_00000[] = 
         "\x31\x0a";
      static unsigned int write_00006_00000_len = 2;
      unsigned char *write_00006 = NULL;
      unsigned int write_00006_len = 0;
      write_00006 = append_buf(write_00006, &write_00006_len, write_00006_00000, write_00006_00000_len);
      if (write_00006_len > 0) {
         transmit_all(1, write_00006, write_00006_len);
      }
      free(write_00006);
   } while (0);
   do {
      unsigned char *read_00013;
      unsigned int read_00013_len;
      unsigned int read_00013_ptr = 0;
      //**** delimited read
      static unsigned char read_00013_delim[] = 
         "\x0a";
      read_00013 = NULL;
      read_00013_len = 0;
      int read_00013_res = delimited_read(0, &read_00013, &read_00013_len, read_00013_delim, 1);
      if (read_00013_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00013_00000[] = 
         "\x51\x75\x65\x75\x65\x20\x30\x3a\x0a";
      read_00013_ptr += data_match(read_00013 + read_00013_ptr, read_00013_len - read_00013_ptr, match_00013_00000, 9);
      free(read_00013);
      if (read_00013_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00014;
      unsigned int read_00014_len;
      unsigned int read_00014_ptr = 0;
      //**** delimited read
      static unsigned char read_00014_delim[] = 
         "\x3a\x20";
      read_00014 = NULL;
      read_00014_len = 0;
      int read_00014_res = delimited_read(0, &read_00014, &read_00014_len, read_00014_delim, 2);
      if (read_00014_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00014_00000[] = 
         "\x20\x20\x49\x73\x20\x71\x75\x65\x75\x65\x20\x23\x30\x20\x61\x20"
         "\x70\x72\x69\x6f\x72\x69\x74\x79\x20\x71\x75\x65\x75\x65\x28\x79"
         "\x2c\x6e\x29\x3a\x20";
      read_00014_ptr += data_match(read_00014 + read_00014_ptr, read_00014_len - read_00014_ptr, match_00014_00000, 37);
      free(read_00014);
      if (read_00014_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00007_00000[] = 
         "\x6e\x0a";
      static unsigned int write_00007_00000_len = 2;
      unsigned char *write_00007 = NULL;
      unsigned int write_00007_len = 0;
      write_00007 = append_buf(write_00007, &write_00007_len, write_00007_00000, write_00007_00000_len);
      if (write_00007_len > 0) {
         transmit_all(1, write_00007, write_00007_len);
      }
      free(write_00007);
   } while (0);
   do {
      unsigned char *read_00015;
      unsigned int read_00015_len;
      unsigned int read_00015_ptr = 0;
      //**** delimited read
      static unsigned char read_00015_delim[] = 
         "\x3a\x20";
      read_00015 = NULL;
      read_00015_len = 0;
      int read_00015_res = delimited_read(0, &read_00015, &read_00015_len, read_00015_delim, 2);
      if (read_00015_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00015_00000[] = 
         "\x20\x20\x57\x68\x61\x74\x27\x73\x20\x74\x68\x65\x20\x6d\x69\x6e"
         "\x69\x6d\x75\x6d\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x20\x70\x61"
         "\x63\x6b\x65\x74\x20\x74\x6f\x20\x70\x6c\x61\x63\x65\x20\x69\x6e"
         "\x20\x71\x75\x65\x75\x65\x20\x23\x30\x20\x28\x30\x2d\x36\x33\x29"
         "\x3a\x20";
      read_00015_ptr += data_match(read_00015 + read_00015_ptr, read_00015_len - read_00015_ptr, match_00015_00000, 66);
      free(read_00015);
      if (read_00015_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00008_00000[] = 
         "\x30\x0a";
      static unsigned int write_00008_00000_len = 2;
      unsigned char *write_00008 = NULL;
      unsigned int write_00008_len = 0;
      write_00008 = append_buf(write_00008, &write_00008_len, write_00008_00000, write_00008_00000_len);
      if (write_00008_len > 0) {
         transmit_all(1, write_00008, write_00008_len);
      }
      free(write_00008);
   } while (0);
   do {
      unsigned char *read_00016;
      unsigned int read_00016_len;
      unsigned int read_00016_ptr = 0;
      //**** delimited read
      static unsigned char read_00016_delim[] = 
         "\x3a\x20";
      read_00016 = NULL;
      read_00016_len = 0;
      int read_00016_res = delimited_read(0, &read_00016, &read_00016_len, read_00016_delim, 2);
      if (read_00016_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00016_00000[] = 
         "\x20\x20\x57\x68\x61\x74\x27\x73\x20\x74\x68\x65\x20\x6d\x61\x78"
         "\x69\x6d\x75\x6d\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x20\x70\x61"
         "\x63\x6b\x65\x74\x20\x74\x6f\x20\x70\x6c\x61\x63\x65\x20\x69\x6e"
         "\x20\x71\x75\x65\x75\x65\x20\x23\x30\x20\x28\x30\x2d\x36\x33\x29"
         "\x3a\x20";
      read_00016_ptr += data_match(read_00016 + read_00016_ptr, read_00016_len - read_00016_ptr, match_00016_00000, 66);
      free(read_00016);
      if (read_00016_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00009_00000[] = 
         "\x36\x33\x0a";
      static unsigned int write_00009_00000_len = 3;
      unsigned char *write_00009 = NULL;
      unsigned int write_00009_len = 0;
      write_00009 = append_buf(write_00009, &write_00009_len, write_00009_00000, write_00009_00000_len);
      if (write_00009_len > 0) {
         transmit_all(1, write_00009, write_00009_len);
      }
      free(write_00009);
   } while (0);
   do {
      unsigned char *read_00017;
      unsigned int read_00017_len;
      unsigned int read_00017_ptr = 0;
      //**** delimited read
      static unsigned char read_00017_delim[] = 
         "\x3a\x20";
      read_00017 = NULL;
      read_00017_len = 0;
      int read_00017_res = delimited_read(0, &read_00017, &read_00017_len, read_00017_delim, 2);
      if (read_00017_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00017_00000[] = 
         "\x20\x20\x57\x68\x61\x74\x20\x69\x73\x20\x74\x68\x65\x20\x64\x65"
         "\x70\x74\x68\x20\x6f\x66\x20\x71\x75\x65\x75\x65\x20\x23\x30\x20"
         "\x28\x31\x20\x2d\x20\x31\x30\x32\x34\x20\x70\x61\x63\x6b\x65\x74"
         "\x73\x29\x3a\x20";
      read_00017_ptr += data_match(read_00017 + read_00017_ptr, read_00017_len - read_00017_ptr, match_00017_00000, 52);
      free(read_00017);
      if (read_00017_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00010_00000[] = 
         "\x31\x30\x30\x30\x0a";
      static unsigned int write_00010_00000_len = 5;
      unsigned char *write_00010 = NULL;
      unsigned int write_00010_len = 0;
      write_00010 = append_buf(write_00010, &write_00010_len, write_00010_00000, write_00010_00000_len);
      if (write_00010_len > 0) {
         transmit_all(1, write_00010, write_00010_len);
      }
      free(write_00010);
   } while (0);
   do {
      unsigned char *read_00018;
      unsigned int read_00018_len;
      unsigned int read_00018_ptr = 0;
      //**** delimited read
      static unsigned char read_00018_delim[] = 
         "\x3a\x20";
      read_00018 = NULL;
      read_00018_len = 0;
      int read_00018_res = delimited_read(0, &read_00018, &read_00018_len, read_00018_delim, 2);
      if (read_00018_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00018_00000[] = 
         "\x20\x20\x57\x68\x61\x74\x20\x69\x73\x20\x74\x68\x65\x20\x77\x65"
         "\x69\x67\x68\x74\x20\x6f\x66\x20\x71\x75\x65\x75\x65\x20\x23\x30"
         "\x20\x28\x31\x20\x2d\x20\x31\x30\x30\x20\x70\x65\x72\x63\x65\x6e"
         "\x74\x29\x3a\x20";
      read_00018_ptr += data_match(read_00018 + read_00018_ptr, read_00018_len - read_00018_ptr, match_00018_00000, 52);
      free(read_00018);
      if (read_00018_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00011_00000[] = 
         "\x31\x30\x30\x0a";
      static unsigned int write_00011_00000_len = 4;
      unsigned char *write_00011 = NULL;
      unsigned int write_00011_len = 0;
      write_00011 = append_buf(write_00011, &write_00011_len, write_00011_00000, write_00011_00000_len);
      if (write_00011_len > 0) {
         transmit_all(1, write_00011, write_00011_len);
      }
      free(write_00011);
   } while (0);
   do {
      unsigned char *read_00019;
      unsigned int read_00019_len;
      unsigned int read_00019_ptr = 0;
      //**** delimited read
      static unsigned char read_00019_delim[] = 
         "\x0a";
      read_00019 = NULL;
      read_00019_len = 0;
      int read_00019_res = delimited_read(0, &read_00019, &read_00019_len, read_00019_delim, 1);
      if (read_00019_res) {} //silence unused variable warning
      /* read match pcre:
wall_clock:\s+\d+\.\d+\s+\(s\)
*/
      static char read_00019_00000_regex[] = 
         "\x77\x61\x6c\x6c\x5f\x63\x6c\x6f\x63\x6b\x3a\x5c\x73\x2b\x5c\x64"
         "\x2b\x5c\x2e\x5c\x64\x2b\x5c\x73\x2b\x5c\x28\x73\x5c\x29";
      static match_result read_00019_00000_match;
      pcre *read_00019_00000_pcre = init_regex(read_00019_00000_regex);
      if (read_00019_00000_pcre != NULL) {
         int rc = regex_match(read_00019_00000_pcre, 0, read_00019 + read_00019_ptr, read_00019_len - read_00019_ptr, &read_00019_00000_match);
         if (rc > 0) {
            read_00019_ptr += read_00019_00000_match.match_end - read_00019_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00019_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00019);
      if (read_00019_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00020;
      unsigned int read_00020_len;
      unsigned int read_00020_ptr = 0;
      //**** delimited read
      static unsigned char read_00020_delim[] = 
         "\x0a";
      read_00020 = NULL;
      read_00020_len = 0;
      int read_00020_res = delimited_read(0, &read_00020, &read_00020_len, read_00020_delim, 1);
      if (read_00020_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00020_00000[] = 
         "\x51\x75\x65\x75\x65\x20\x30\x0a";
      read_00020_ptr += data_match(read_00020 + read_00020_ptr, read_00020_len - read_00020_ptr, match_00020_00000, 8);
      free(read_00020);
      if (read_00020_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00021;
      unsigned int read_00021_len;
      unsigned int read_00021_ptr = 0;
      //**** delimited read
      static unsigned char read_00021_delim[] = 
         "\x0a";
      read_00021 = NULL;
      read_00021_len = 0;
      int read_00021_res = delimited_read(0, &read_00021, &read_00021_len, read_00021_delim, 1);
      if (read_00021_res) {} //silence unused variable warning
      /* read match pcre:
  Pkts Transmitted:       \d+
*/
      static char read_00021_00000_regex[] = 
         "\x20\x20\x50\x6b\x74\x73\x20\x54\x72\x61\x6e\x73\x6d\x69\x74\x74"
         "\x65\x64\x3a\x20\x20\x20\x20\x20\x20\x20\x5c\x64\x2b";
      static match_result read_00021_00000_match;
      pcre *read_00021_00000_pcre = init_regex(read_00021_00000_regex);
      if (read_00021_00000_pcre != NULL) {
         int rc = regex_match(read_00021_00000_pcre, 0, read_00021 + read_00021_ptr, read_00021_len - read_00021_ptr, &read_00021_00000_match);
         if (rc > 0) {
            read_00021_ptr += read_00021_00000_match.match_end - read_00021_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00021_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00021);
      if (read_00021_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00022;
      unsigned int read_00022_len;
      unsigned int read_00022_ptr = 0;
      //**** delimited read
      static unsigned char read_00022_delim[] = 
         "\x0a";
      read_00022 = NULL;
      read_00022_len = 0;
      int read_00022_res = delimited_read(0, &read_00022, &read_00022_len, read_00022_delim, 1);
      if (read_00022_res) {} //silence unused variable warning
      /* read match pcre:
  Pkts Dropped:           \d+
*/
      static char read_00022_00000_regex[] = 
         "\x20\x20\x50\x6b\x74\x73\x20\x44\x72\x6f\x70\x70\x65\x64\x3a\x20"
         "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x5c\x64\x2b";
      static match_result read_00022_00000_match;
      pcre *read_00022_00000_pcre = init_regex(read_00022_00000_regex);
      if (read_00022_00000_pcre != NULL) {
         int rc = regex_match(read_00022_00000_pcre, 0, read_00022 + read_00022_ptr, read_00022_len - read_00022_ptr, &read_00022_00000_match);
         if (rc > 0) {
            read_00022_ptr += read_00022_00000_match.match_end - read_00022_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00022_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00022);
      if (read_00022_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00023;
      unsigned int read_00023_len;
      unsigned int read_00023_ptr = 0;
      //**** delimited read
      static unsigned char read_00023_delim[] = 
         "\x0a";
      read_00023 = NULL;
      read_00023_len = 0;
      int read_00023_res = delimited_read(0, &read_00023, &read_00023_len, read_00023_delim, 1);
      if (read_00023_res) {} //silence unused variable warning
      /* read match pcre:
  Average Latency \(s\):\s+\d+\.\d+
*/
      static char read_00023_00000_regex[] = 
         "\x20\x20\x41\x76\x65\x72\x61\x67\x65\x20\x4c\x61\x74\x65\x6e\x63"
         "\x79\x20\x5c\x28\x73\x5c\x29\x3a\x5c\x73\x2b\x5c\x64\x2b\x5c\x2e"
         "\x5c\x64\x2b";
      static match_result read_00023_00000_match;
      pcre *read_00023_00000_pcre = init_regex(read_00023_00000_regex);
      if (read_00023_00000_pcre != NULL) {
         int rc = regex_match(read_00023_00000_pcre, 0, read_00023 + read_00023_ptr, read_00023_len - read_00023_ptr, &read_00023_00000_match);
         if (rc > 0) {
            read_00023_ptr += read_00023_00000_match.match_end - read_00023_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00023_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00023);
      if (read_00023_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00024;
      unsigned int read_00024_len;
      unsigned int read_00024_ptr = 0;
      //**** delimited read
      static unsigned char read_00024_delim[] = 
         "\x0a";
      read_00024 = NULL;
      read_00024_len = 0;
      int read_00024_res = delimited_read(0, &read_00024, &read_00024_len, read_00024_delim, 1);
      if (read_00024_res) {} //silence unused variable warning
      /* read match pcre:
  Enqueued Pkts:          \d+
*/
      static char read_00024_00000_regex[] = 
         "\x20\x20\x45\x6e\x71\x75\x65\x75\x65\x64\x20\x50\x6b\x74\x73\x3a"
         "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x5c\x64\x2b";
      static match_result read_00024_00000_match;
      pcre *read_00024_00000_pcre = init_regex(read_00024_00000_regex);
      if (read_00024_00000_pcre != NULL) {
         int rc = regex_match(read_00024_00000_pcre, 0, read_00024 + read_00024_ptr, read_00024_len - read_00024_ptr, &read_00024_00000_match);
         if (rc > 0) {
            read_00024_ptr += read_00024_00000_match.match_end - read_00024_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00024_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00024);
      if (read_00024_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00025;
      unsigned int read_00025_len;
      unsigned int read_00025_ptr = 0;
      //**** delimited read
      static unsigned char read_00025_delim[] = 
         "\x0a";
      read_00025 = NULL;
      read_00025_len = 0;
      int read_00025_res = delimited_read(0, &read_00025, &read_00025_len, read_00025_delim, 1);
      if (read_00025_res) {} //silence unused variable warning
      /* read match pcre:
  Queue Depth \x28bytes\x29:    \d+
*/
      static char read_00025_00000_regex[] = 
         "\x20\x20\x51\x75\x65\x75\x65\x20\x44\x65\x70\x74\x68\x20\x5c\x78"
         "\x32\x38\x62\x79\x74\x65\x73\x5c\x78\x32\x39\x3a\x20\x20\x20\x20"
         "\x5c\x64\x2b";
      static match_result read_00025_00000_match;
      pcre *read_00025_00000_pcre = init_regex(read_00025_00000_regex);
      if (read_00025_00000_pcre != NULL) {
         int rc = regex_match(read_00025_00000_pcre, 0, read_00025 + read_00025_ptr, read_00025_len - read_00025_ptr, &read_00025_00000_match);
         if (rc > 0) {
            read_00025_ptr += read_00025_00000_match.match_end - read_00025_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00025_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      free(read_00025);
      if (read_00025_ptr) {}  //silence unused variable warning if any
   } while (0);
   //*** delay
   delay(2);
}
