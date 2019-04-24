set tabstop=2
set softtabstop=2
set shiftwidth=4
set noexpandtab
set colorcolumn=100
highlight ColorColumn ctermbg=darkgray
augroup project
		autocmd!
		autocmd BufRead,BufNewFile *.h,*.c set filetype=c.doxygen
augroup END
let &path.="./include"
set makeprg=make\ -C\ ./build\ -j9
nnoremap <F4> :make!<CR>
nnoremap <F5> :!./bin/hello<CR>
