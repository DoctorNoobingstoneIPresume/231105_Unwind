@echo off
cyg-bash -c "xtimeq './Go' 2>&1 | tee '_go' | tee -a '_go_a'"
