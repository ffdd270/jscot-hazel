declare function Begin( name : string, is_open : { open: boolean }, flags : number );
declare function End();
declare function TextUnformatted( text : string, text_end : string );
declare function ImGui_Text( text : string );
declare function Button( text : string,  size : { x : number, y : number }  ) : boolean;