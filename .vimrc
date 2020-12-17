set nocompatible 

filetype off

call plug#begin('~/.vim/plugged')
" archives tree
Plug 'preservim/nerdtree'
"themes
Plug 'morhetz/gruvbox'
" autocomplete
Plug 'neoclide/coc.nvim', {'branch': 'release'}
call plug#end()

filetype plugin indent on

syntax enable
colorscheme gruvbox


set background=dark
set number
set mouse=a
set encoding=utf8
set tabstop=4


nnoremap <C-n> :NERDTreeToggle <cr>

