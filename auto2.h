int auto2_mount_cdrom(char *device);
int auto2_mount_harddisk(char *dev);
void auto2_scan_hardware(char *log_file);
int auto2_init(void);
// char *auto2_disk_list(int *boot_disk);
char *auto2_serial_console(void);
int auto2_find_install_medium(void);
int auto2_find_floppy(void);
void load_network_mods(void);
int activate_driver2(hd_data_t *hd_data, hd_t *hd, slist_t **mod_list, int show_modules);
void pcmcia_socket_startup(void);
