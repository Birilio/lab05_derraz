cmd_/home/deeplearning/lab05/first.ko := ld -r -m elf_x86_64 -z max-page-size=0x200000 -T ./scripts/module-common.lds --build-id  -o /home/deeplearning/lab05/first.ko /home/deeplearning/lab05/first.o /home/deeplearning/lab05/first.mod.o ;  true