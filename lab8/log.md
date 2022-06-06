```sh
[thesage@mephi ~]$ sudo nano /etc/pam.d/su
[thesage@mephi ~]$ man useradd
[thesage@mephi ~]$ sudo useradd -G wheel user1
[thesage@mephi ~]$ sudo passwd user1
Changing password for user user1.
New password:
Retype new password:
passwd: all authentication tokens updated successfully
[thesage@mephi ~]$ su - user1
Password:
[user1@mephi ~]$ whoami
user1
[user1@mephi ~]$ su
Password:
sh: Permission denied
[user1@mephi ~]$ exit
logout
[thesage@mephi ~]$ sudo nano /etc/pam.d/su
[thesage@mephi ~]$ su - user1
Password:
[user1@mephi user1]$ su
Password:
[root@mephi user1]$ whoami
root
[root@mephi user1]$ exit
exit
[user1@mephi ~]$ exit
logout
[thesage@mephi ~]$ man pam_pwquality
[thesage@mephi ~]$ sudo nano /etc/security/pwquality.conf
[thesage@mephi ~]$ sudo nano /etc/pam.d/system-auth
[thesage@mephi ~]$ sudo passwd user1
Changing password for user user1.
New password:
BAD PASSWORD: The password is shorter than 12 characters
[thesage@mephi ~]$ wget https://raw.githubusercontent.com/linux-pam/linux-pam/master/examples/check_user.c
[thesage@mephi ~]$ nano check_user.c
[thesage@mephi ~]$ sudo yum install pam-devel
[thesage@mephi ~]$ gcc check_user.c -o check_user -lpam -lpam_misc
[thesage@mephi ~]$ sudo nano /etc/pam.d/check
[thesage@mephi ~]$ ./check_user thesage
Password:
Authenticated
error code: Success
[thesage@mephi ~]$ su -
Password:
[root@mephi ~]$ passwd -e thesage
Expiring password for user thesage.
passwd: Success
[root@mephi ~]$ exit
logout
[thesage@mephi ~]$ ./check_user thesage
Password:
Not Authenticated
error code: Authentication token is no longer valid; new one required
```