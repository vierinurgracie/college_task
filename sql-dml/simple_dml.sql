CREATE DATABASE indomare;

CREATE TABLE tb_barang
(
	id_barang varchar(50)NOT NULL,
	nama_barang varchar(50)NOT NULL,
	TGL_terima datetime NOT NULL,
	stok_barang int NULL DEFAULT 0,
	constraint pk_barang PRIMARY KEY (id_barang)
)

CREATE TABLE tb_pelanggan
(
	id_pelanggan varchar(50)NOT NULL,
	nama_pelanggan varchar(50)NOT NULL,
	CONSTRAINT pk_pelanggan PRIMARY KEY (id_pelanggan)
)

CREATE TABLE tb_pembelian
(
	id_pelanggan varchar(50)NOT NULL,
	id_barang varchar (50)NOT NULL,
	nama_pelanggan varchar(50)NOT NULL,
	TGL_beli datetime NOT NULL,
	jml_beli int NOT NULL,
	CONSTRAINT pk_pembelian PRIMARY KEY (id_pelanggan)	
)

ALTER TABLE tb_pembelian
ADD CONSTRAINT fk_relasi_pembelian FOREIGN KEY(id_barang)
REFERENCES tb_barang(id_barang)

ALTER TABLE tb_pelanggan 
ADD CONSTRAINT fk_relasi_pelanggan FOREIGN KEY(id_pelanggan)
REFERENCES tb_pembelian(id_pelanggan)

ALTER TABLE tb_pembelian 
ADD alamat_pembeli VARCHAR(100)NULL

INSERT INTO tb_barang (id_barang ,nama_barang,TGL_terima,stok_barang)
VALUES ('p01', 'sabun', '2021-03-15', '5'),
('p02', 'sampo', '2021-03-14','5');

INSERT INTO tb_barang (id_barang ,nama_barang,TGL_terima,stok_barang)
VALUES('p03','sikat gigi','2021-03-13','10'),
('p04','sabun cair','2021-03-12','8'),
('p05','sepatu','2021-03-11','12'),
('p06','sandal','2021-03-10','18'),
('p07','sapu','2021-03-15','11'),
('p08','ember','2021-03-16','9');

INSERT INTO tb_pembelian (id_pelanggan, id_barang, nama_pelanggan, TGL_beli, jml_beli, alamat_pembeli)
VALUES ('77', 'p01', 'vieri', '2021-04-16', '2','kuta'),
('88', 'p02', 'nurgracie', '2021-04-17', '3','nusadua');

INSERT INTO tb_pembelian (id_pelanggan, id_barang, nama_pembeli , TGL_beli, jml_beli, alamat_pembeli)
VALUES ('99', 'p01', 'agung', '2021-05-12', '1', 'denpasar');

INSERT INTO tb_pembelian (id_pelanggan, id_barang, nama_pembeli , TGL_beli, jml_beli, alamat_pembeli)
VALUES ('11','p03','abi','2021-05-13','2','nusadua'),
('12','p04','andre','2021-05-14','1','kerobokan'),
('13','p05','yoga','2021-05-15','3','tuban'),
('14','p06','julio','2021-05-16','2','kampial');


INSERT INTO tb_pelanggan (id_pelanggan, nama_pelanggan)
SELECT id_pelanggan, nama_pembeli FROM tb_pembelian ;

SELECT *FROM tb_pelanggan;

UPDATE tb_barang 
SET nama_barang = 'odol'
WHERE id_barang = 'p01';

SELECT nama_barang FROM tb_barang tb ;

DELETE FROM tb_pelanggan 
WHERE id_pelanggan = '88';


SELECT *FROM tb_pelanggan ;
SELECT *FROM tb_pembelian ;

SELECT nama_barang FROM tb_barang WHERE nama_barang LIKE '%o%';

ALTER TABLE tb_pembelian 
CHANGE nama_pelanggan nama_pembeli VARCHAR(100) NOT NULL;

SELECT tb_barang.nama_barang, tb_pembelian.nama_pembeli FROM tb_pembelian cross join tb_barang

select tb_pembelian.nama_pembeli, tb_barang.nama_barang FROM tb_barang 
inner join tb_pembelian on tb_barang.id_barang = tb_pembelian.id_barang

SELECT tb_pembelian.nama_pembeli , tb_barang.nama_barang FROM tb_barang
left join tb_pembelian on tb_barang.id_barang = tb_pembelian.id_barang

SELECT tb_pembelian.nama_pembeli , tb_barang.nama_barang FROM tb_barang
right join tb_pembelian on tb_barang.id_barang = tb_pembelian.id_barang

SELECT LOWER(nama_barang)AS huruf_kecil FROM tb_barang 